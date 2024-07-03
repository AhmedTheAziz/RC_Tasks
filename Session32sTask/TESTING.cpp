#include "StackLib/Stack.hpp"
#include <gtest/gtest.h>

using namespace ::testing;

class StackTest : public ::testing::Test {
protected:
    Stack<int> stack;
};
//Testing Successful pushing
TEST(StackTest, SuccessfulPushing)
{
    std::cout<<"....Testing Pushing Success...."<<std::endl;
   Stack<int> stack(5);
    EXPECT_EQ(stack.push(1), Status::Success); // making sure it push
    EXPECT_EQ(stack.push(2), Status::Success);
    //EXPECT_EQ(stack.top,1); //making sure top equals to the index of vector which is 1
}
//Testing Failure Pushing.
TEST(StackTest, FAILING2PUSH)
{
        std::cout<<"....Testing Pushing Fail...."<<std::endl;
    Stack<int> stack(2);
    EXPECT_EQ(stack.push(1), Status::Success); // making sure it push
    EXPECT_EQ(stack.push(2), Status::Success);
    EXPECT_EQ(stack.push(3), Status::Failed); //making sure it cannot push
}

//Testing Successful POP.
TEST(StackTest, SuccessfulPOP)
{
        std::cout<<"....Testing POPing Success...."<<std::endl;
    Stack<int> stack(5);
    stack.push(1);
    stack.push(2);
    EXPECT_EQ(stack.pop(), Status::Success);
   // EXPECT_EQ(stack.top,0);
}
//Testing FAILED POP
TEST(StackTest, FAILEDPOP)
{
            std::cout<<"....Testing POPing Fail...."<<std::endl;

    Stack<int> stack(2);
    stack.push(1);
    stack.push(2);
     EXPECT_EQ(stack.pop(), Status::Success);
     EXPECT_EQ(stack.pop(), Status::Success);
     EXPECT_EQ(stack.pop(), Status::Failed);
    // EXPECT_EQ(stack.top, -1);
}

//Testing IS_EMPTY
TEST(StackTest, EMPTYtest)
{
        std::cout<<"....Testing Emptiness...."<<std::endl;
    Stack<int> stack(5);
    EXPECT_TRUE(stack.is_empty()); // making sure that is empty =1
    stack.push(1);
    EXPECT_FALSE(stack.is_empty()); //making sure tha is empty =0
}

//Testing PRINTING.........

TEST(StackTest, PRINTINGTEST)
{
        std::cout<<"....Testing Printing...."<<std::endl;
    Stack<int> stack(3);
        stack.push(1);
        stack.push(2);
        stack.push(3);
    testing::internal::CaptureStdout();
    stack.print();
    std::string OutPut= testing::internal::GetCapturedStdout();
    EXPECT_EQ(OutPut, "[ 3, 2, 1 ]\n");
}

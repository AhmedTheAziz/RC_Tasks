//#include "StackLib/Stack.hpp"
#include"testlib/stuck.hpp"
#include <iostream>
#include <vector>
int main()
{ 
    Stack<int> stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();
    stack.print();
    stack.pop();

}
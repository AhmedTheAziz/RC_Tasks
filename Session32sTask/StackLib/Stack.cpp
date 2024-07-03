#include "Stack.hpp"
#include <iostream>
#include <vector>
    //Constructor
template <class T>
Stack<T>::Stack(int s):  top(-1),size(s),item(s)
    {
        std::cout<<"Constructor is Now Activated...."<<std::endl;
    }
    //Status Push..
template <class T>
Status Stack<T>::push(T element)
    {
        if(top>=size)
        {
        std::cout<<"Stack is Full!!"<<std::endl;
            return Status::Failed;
        }
        else
        {
        top++;
         item[top]=element;
            return Status::Success;
        }
    }
    // Status Pop..
template <class T>    
bool Stack<T>::is_empty() // 1 when top < 0
    {
        return top < 0;
    }
template <class T>    
Status Stack<T>::pop()
    {
        if(!is_empty())
        {
            top--;
              return Status::Success;
        }
        else
        {
           std::cout<<"Stack is EMPTY to POP!!!"<<std::endl; 
             return Status::Failed;
        }
    }

// Print.
template <class T>    
void Stack<T>::print()
    {
        std::cout << "[";
        for (int i = top; i >= 0; i--)
        {
            std::cout << " "<<item[i];
            if(i!=0)
            {
                 std::cout<< ",";
            }
        }
        std::cout << " ]";
        std::cout << std::endl;
    }

#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>
#include <vector>
enum class Status : char
{
Failed = 0,
Success
};

template<class T>
class Stack
{
public:
//Constructor
    Stack(int s);
//Status Push..
    Status push(T element);
// Status Pop..
    bool is_empty(); // 1 when top < 0
    Status pop();
// Print.
    void print();
private:
    std::vector<T> item;
    int top;
    int size;
};
#endif

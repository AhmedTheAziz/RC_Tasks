#include <iostream>

void add(int *a, int *b);
void absd(int *a, int *b);

int main ()
{
    int x=0, y=0;
    std::cin>> x>>y;
    add(&x,&y);
    absd(&x,&y);
    
}
void add(int *a, int *b)
{
    int sum = *a+*b;
    std::cout << sum<< std::endl;
}
void absd(int *a, int *b)
{
    int ab = abs(*a-*b) ;
    std::cout<<ab<<std::endl;
}
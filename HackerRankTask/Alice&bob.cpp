#include <iostream>
#include <array>
#include <algorithm>
const int n =3;
void inputarray( std::array<int,n> &input);

int main()
{
    int alice=0,bob=0;
    std::array<int,n> a;
    std::array<int,n> b;
inputarray(a);
inputarray(b);
    for (int i =0; i < n ; i++)
    {
        if ( a[i] > b[i])
        {
            alice=alice+1;
            std::cout<<"if " <<alice<< std::endl;
        }
        else if ( b[i] > a[i])
        {
            bob= bob + 1;
            std::cout<<"else if "<<bob<<std::endl;
        }
        /*
        else if (a[i] == b[i])
        {
            alice+=0;
            bob+=0;
            std::cout<<"else "<<alice<<"  "<<bob<<std::endl;
        }
        */
        else
        {
            alice = alice +0;
            bob = bob + 0;
        }
        
    }
    std::cout<< alice << " "<< bob;
    
    
}
void inputarray(std::array<int,n> &input)
{
     for (int &element : input)
    {
        std::cin>> element;
    }
    
}
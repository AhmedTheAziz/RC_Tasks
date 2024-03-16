#include <iostream>
#include <array>
#include <algorithm>
#include <iterator> 

const int N=1000;
void inarr(int &n, std::array<int, N> &arr);
void otarr(int &n, std::array<int,N> &arr);

int main ()
{
    int n=0;
    std::cin>>n;
    std::array<int, N> arr;
    inarr(n,arr);
    otarr(n,arr);
     /* concept test
     std::cout<< arr[n-1]<< " ";
     std::cout<< arr[n-2]<< " ";
     std::cout<< arr[n-3]<< " ";
     std::cout<< arr[n-4]<< " ";
     */
   
    return 0;
}
void inarr(int &n, std::array<int, N> &arr)
{
    arr.fill(0);
    for (int i = 0; i < n ; ++i)
    {
        std::cin>> arr[i];
        //std::cout<<std::endl;
    }
}

void otarr(int &n, std::array<int,N> &arr)
{
    for(int i = n-1 ;  i >= 0  ; i--)
    {
        std::cout<< arr[i]<< " ";
    }
}
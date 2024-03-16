
#include <iostream>
#include <array>
#include <algorithm>

const int o =10;

int main ()
{
    int n=0;
  std::uint64_t sum=0;
    std::array<unsigned long ,o> arr;
    arr.fill(0);
    std::cin>>n; 
    for (int i=0; i<n ; i++)
    {
         std::cin>> arr[i];
    } 
        for(int i=0; i<n;i++)
        {
          sum = sum + arr[i];
        }
        std::cout<<sum;
        return 0;
}

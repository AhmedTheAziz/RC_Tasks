#include <iostream>
#include <array>

int main()
{
    int T, n; // T= Targeted Number, n = size of array.
    std::array<int, 10> arr;
    std::cout << "Enter the Size of Array..\n";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "Enter The Value of Element " << i + 1 << std::endl;
        std::cin >> arr[i];
    }
    std::cout << "Enter the Targeted Number..\n";
    std::cin >> T;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] + arr[i] == T)
            {
                std::cout << "The Two Numbers are " << arr[i] << " & " << arr[j] << std::endl;
                std::cout << "The Two Indices are " << i << " & " << j << std::endl;
                std::cout << "The Target Value is " << T << std::endl;
                break;
            }
        }
    }
}
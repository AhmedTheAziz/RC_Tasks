/*
Name: Ahmed Abdelaziz
Robotics Corner.
Session 16's Task:
Task01: UML 
Task02: Array Search for The Sum of Two Indices that Equals to a Specific Target
*/
// Includes.
#include <iostream>
// Task 1 (UML) (Task01.exe)
/*
#include "Sales.h"
#include "Engineer.h"
// Functions.
void Employees(Employee &E);
void Print(Employee *E);
void SaleS(Sales &S);
void Print(Sales *S);
void Engineers(Engineer &Eng);
void Print(Engineer *Eng);
// int main
int main()
{
    int Q = 0, SQ = 0;
    Employee E;
    Sales S;
    Engineer Eng;
    //While Loop to Keep the Program Running.
    while (Q >= 0)
    {
        std::cout << "\n Welcome to The Selection list, insert from 1 to 2 to Choose whether to Enter Data, View Data or 0 to close.\n";
        std::cout << "................\n";
        std::cin >> Q;
        std::cout << "................\n";
        // End Task
        if (Q == 0)
        {
            std::cout << "Thank You!!";
            break;
        }
        else if (Q == 1)
        {
            std::cout << "\n Welcome to The Selection list, insert from 1 to 3 to Choose which Data to Enter or 0 to go to the previous List.\n";
            std::cout << "1- Employee, 2- Sales, 3- Engineer." << std::endl;
            std::cout << "................\n";
            std::cin >> SQ;
            std::cout << "................\n";
            // End Of Data Entry.
            if (SQ == 0)
            {
                std::cout << "Data Entry Ended!!";
                // break;
            }
            // Employees.
            else if (SQ == 1)
            {
                Employees(E);
            }
            // Sales.
            else if (SQ == 2)
            {
                SaleS(S);
            }
            // Engineer.
            else if (SQ == 3)
            {
                Engineers(Eng);
            }
        }
        else if (Q == 2)
        {
            std::cout << "\n Welcome to The Selection list, insert from 1 to 3 to Choose which Data to View or 0 to go to the previous List.\n";
            std::cout << "1- Employee, 2- Sales, 3- Engineer." << std::endl;
            std::cout << "................\n";
            std::cin >> SQ;
            std::cout << "................\n";
            // End Of Data View.
            if (SQ == 0)
            {
                std::cout << "Data Veiw Ended!!";
                // break;
            }
            // Employees.
            else if (SQ == 1)
            {
                Print(&E);
            }
            // Sales.
            else if (SQ == 2)
            {
                Print(&S);
            }
            // Engineer.
            else if (SQ == 3)
            {
                Print(&Eng);
            }
        }
    }
}
// Functions Declerations.
void Employees(Employee &E)
{
    std::cout << "Please Enter The Name, ID, Salary of an Employee.\n";
    auto esn = E.SetName();
    auto esi = E.SetID();
    auto ess = E.SetSalary();
}
void Print(Employee *E)
{
    std::cout << "The Data of The Employee: " << std::endl;
    E->Print();
}
void SaleS(Sales &S)
{
    std::cout << "Please Enter The Name, ID, Salary, Gross Salary, Commercial Rate of a Sales Employee.\n";
    auto ssn = S.SetName();
    auto ssi = S.SetID();
    auto sss = S.SetSalary();
    auto ssgs = S.SetGrossSalary();
    auto sscr = S.SetCommercialRate();
}
void Print(Sales *S)
{
    std::cout << "The Data of The Sales Employee: " << std::endl;
    S->Print();
}
void Engineers(Engineer &Eng)
{
    std::cout << "Please Enter The Name, ID, Salary, Speciality, Years of Experince, OverTime hours, OverTims_Hour_Rate of an Engineer Employee.\n";
    auto esn = Eng.SetName();
    auto esi = Eng.SetID();
    auto ess = Eng.SetSalary();
    auto essp = Eng.SetSP();
    auto esye = Eng.SetYOE();
    auto esot = Eng.SetOTH();
    auto esotr = Eng.SetOTHR();
}
void Print(Engineer *Eng)
{
    std::cout << "The Data of The Engineer Employee: " << std::endl;
    Eng->Print();
}
*/

// Task 2 (Find and Calculate) (Task02.exe)
#include <array>
/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
*/
// int main
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
        int arrow = 1;
    again:
        //std::cout << " arrow is " << arrow << std::endl;
        //std::cout<<" i is "<<i<<std::endl;

        if (arr[arrow] + arr[i] == T)
        {
            std::cout << "The Two Numbers are " << arr[i] << " & " << arr[arrow] << std::endl;
            std::cout << "The Two Indices are " << i << " & " << arrow << std::endl;
            std::cout << "The Target Value is " << T << std::endl;
            break;
        }
        else if (arrow >= n)
        {
           // std::cout << "TESTTTT\n";
        }
        else
        {
            ++arrow;
           // std::cout << "Test..\n";
            goto again;
        }
    }
}
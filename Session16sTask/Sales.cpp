#include "Sales.h"
// Constructor.
Sales::Sales() : Gross_Salary(0), Commercial_Rate(0)
{
}
// Setters.
float Sales::SetGrossSalary()
{

    std::cout<<"Gross Salary:\n";
again:
    std::cin >> Gross_Salary;
    if (Gross_Salary > 0)
    {
        this->Gross_Salary;
        return Gross_Salary;
    }
    else
    {
        std::cout << "Error" << std::endl;
        std::cin.clear();            // clear bad input flag
        std::cin.ignore(1000, '\n'); // discard input /*std::numeric_limits<std::streamsize>::max()*/
        std::cout << "Invalid input, please re-enter.\n";
        goto again;
    }
}
float Sales::SetCommercialRate()
{
    std::cout<<"Commercial Rate:\n";
again:
    std::cin >> Commercial_Rate;
    if (Commercial_Rate > 0)
    {
        this->Commercial_Rate;
        return Commercial_Rate;
    }
    else
    {
        std::cout << "Error" << std::endl;
        std::cin.clear();            // clear bad input flag
        std::cin.ignore(1000, '\n'); // discard input /*std::numeric_limits<std::streamsize>::max()*/
        std::cout << "Invalid input, please re-enter.\n";
        goto again;
    }
}
// Getters.
float Sales::GetGrossSalary()
{
    return Gross_Salary;
}
float Sales::GetCommercialRate()
{
    return Commercial_Rate;
}
// Display.
void Sales::Print()
{
    Employee::Print();
    if (Gross_Salary == 0 && Commercial_Rate == 0)
    {
        std::cout << ", Gross Salary: "
                  << "UnKnown"
                  << ", Commercial Rate: "
                  << "UnKnown"; // std::endl;
    }
    
    else if (Commercial_Rate == 0)
    {
        std::cout << ", Gross Salary: " << Gross_Salary
                  << ", Commercial Rate: "
                  << "UnKnown"; // std::endl;
    }
    else if (Gross_Salary == 0 )
    {
        std::cout << ", Gross Salary: "
                  << "UnKnown"
                  << ", Commercial Rate: " << Commercial_Rate; // std::endl;
    }
    else
    {
        std::cout << ", Gross Salary: " << Gross_Salary
                  << ", Commercial Rate: " << Commercial_Rate; // std::endl;
    }
}
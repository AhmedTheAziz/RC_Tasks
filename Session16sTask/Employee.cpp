#include "Employee.h"
// Constructor.
Employee::Employee() : Name("UnKnown"), ID(0), Salary(00)
{
}
// Setters.
std::string Employee::SetName()
{
        std::cout<<"Name:\n";

    std::cin >> Name;
    return Name;
}
int Employee::SetID()
{
        std::cout<<"ID:\n";

again:
    std::cin >> ID;
    if (ID > 0)
    {
        this->ID;
        return ID;
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
double Employee::SetSalary()
{
        std::cout<<"Salary:\n";

again:
    std::cin >> Salary;
    if (Salary > 0 )
    {
        this->Salary;
        return Salary;
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
std::string Employee::GetName()
{
    return Name;
}
int Employee::GetID()
{
    return ID;
}
double Employee::GetSalary()
{
    return Salary;
}
// Display.
void Employee::Print()
{
    if (ID == 0 && Salary == 0)
        {
        std::cout << "Name: " << Name
                  << ", ID: "
                  << "UnKnown"
                  << ", Salary: "
                  << "UnKnown"; // std::endl;
    }

    else if (Salary == 0)
    {
        std::cout << "Name: " << Name
                  << ", ID: " << ID
                  << ", Salary: "
                  << "UnKnown"; // std::endl;
    }
    else if (ID == 0 )
        {
        std::cout << "Name: " << Name
                  << ", ID: "
                  << "UnKnown"
                  << ", Salary: " << Salary; // std::endl;
    }

    else
    {
        std::cout << "Name: " << Name
                  << ", ID: " << ID
                  << ", Salary: " << Salary; // std::endl;
    }
}
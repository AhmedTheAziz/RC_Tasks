#include "Employee.h"
// Constructor>
Employee::Employee() : Salary(0), Rank("N/A"), JOB("N/A")
{
}
/*Employee::Employee(std::string n, std::string g, float a, int sal, std::string R, std::string J) : Person(n, g, a), Salary(sal), Rank(R), JOB(J)
{
}*/
// Setters.
int Employee::setSalary()
{
    again:
    std::cout << std::endl
              << "The Salary: \n";
    std::cin >> Salary;
        if (Salary > 0)
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
std::string Employee::setRank()
{
    std::cout << std::endl
              << "The Rank: \n";
    std::cin >> Rank;
    return Rank;
}
std::string Employee::setJOB()
{
    std::cout << std::endl
              << "The Job: \n";
    std::cin >> JOB;
    return JOB;
}
// Getters
int Employee::getSalary()
{
    return Salary;
}
std::string Employee::getRANK()
{
    return Rank;
}
std::string Employee::getJOB()
{
    return JOB;
}
// Display.
void Employee::Display()
{
    Person::Display();
    if (Salary == 0)
    {
        std::cout << ", Salary: "
                  << "N/A"
                  << ", Rank: " << getRANK() << ", Job: " << getJOB(); // std::endl;
    }
    else
    {
        std::cout << ", Salary: " << getSalary() << ", Rank: " << getRANK() << ", Job: " << getJOB(); // std::endl;
    }
}
#include "Employee.h"
//Constructor>
Employee::Employee() : Salary(0),Rank("N/A"),JOB("N/A")
{}
/*Employee::Employee(std::string n, std::string g, float a, int sal, std::string R, std::string J) : Person(n, g, a), Salary(sal), Rank(R), JOB(J)
{
}*/
//Setters.
int Employee::setSalary()
{
    std::cin>> Salary;
    return Salary;
}
std::string Employee::setRank()
{
    std::cin>>Rank;
    return Rank;
}
std::string Employee::setJOB()
{
    std::cin>> JOB;
    return JOB;
}
//Getters
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
//Display.
    void Employee::Display()
    {
        Person::Display();
        if (Salary == 0)
        {
        std::cout << ", Salary: " << "N/A" << ", Rank: " << getRANK() << ", Job: " << getJOB(); // std::endl;
        }
        else
        {
        std::cout << ", Salary: " << getSalary() << ", Rank: " << getRANK() << ", Job: " << getJOB();// std::endl;
        }
    }
#include "Employee.h"
/*Employee::Employee(std::string n, std::string g, float a, int sal, std::string R, std::string J) : Person(n, g, a), Salary(sal), Rank(R), JOB(J)
{
}*/
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

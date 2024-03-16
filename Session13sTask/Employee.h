#pragma once
#include <iostream>
#include "Person.h"

class Employee : public Person
{
private:
    int Salary;
    std::string Rank;
    std::string JOB;

public:
    /*Employee(std::string n, std::string g, float a, int sal, std::string R, std::string J) : Person(n, g, a), Salary(sal), Rank(R), JOB(J)
    {
    }*/
    int setSalary();
    std::string setRank();
    std::string setJOB();
    int getSalary();
    std::string getRANK();
    std::string getJOB();
};

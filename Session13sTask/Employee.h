#pragma once
#include <iostream>
#include "Person.h"
#include <ostream>

class Employee : virtual public Person
{
protected:
    int Salary;
    std::string Rank;
    std::string JOB;

public:
    //Constructor>
    Employee();
    /*Employee(std::string n, std::string g, float a, int sal, std::string R, std::string J) : Person(n, g, a), Salary(sal), Rank(R), JOB(J)
    {
    }*/
    //Setters>
    int setSalary();
    std::string setRank();
    std::string setJOB();
    //Getters.
    int getSalary();
    std::string getRANK();
    std::string getJOB();
    //Display.
     void Display();
     friend std::ostream& Display(std::ostream &output,Employee &Salary);

};

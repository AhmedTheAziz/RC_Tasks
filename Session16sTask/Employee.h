#pragma once
#include <iostream>
// get total salary, print.
class Employee
{
private:
    std::string Name;
    int ID;
    double Salary;

public:
    // Constructor.
    Employee();
    // Setters.
    std::string SetName();
    int SetID();
    double SetSalary();
    // Getters.
    std::string GetName();
    int GetID();
    double GetSalary();
    // Display.
    virtual void Print();
};

#pragma once
#include <iostream>
#include "Employee.h"
// get total salary, print.
class Sales : public virtual Employee
{
private:
    float Gross_Salary;
    float Commercial_Rate;

public:
    // Constructor.
    Sales();
    // Setters.
    float SetGrossSalary();
    float SetCommercialRate();
    // Getters.
    float GetGrossSalary();
    float GetCommercialRate();
    // Display.
    void Print();
};
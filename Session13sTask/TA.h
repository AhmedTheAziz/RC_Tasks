#pragma once
#include <iostream>
#include "Student.h"
#include "Employee.h"
class TA : public Student,  public Employee
{
private:
    std::string Subjects;

public:
    // Constructor
    TA();
    // Setters.
    std::string SetSubjects();
    // Getters.
    std::string GetSubjects();
    // Display.
    void Display();
    
};

#pragma once
#include <iostream>
#include "Employee.h"
class Engineer : virtual public Employee
{
private:
    std::string SP; // Speciality
    int YOE;        // Years_of_Experince
    int OTH;        // OverTime_hours
    float OTHR;     // OverTims_Hour_Rate
public:
    // Constructor.
    Engineer();
    // Setters.
    std::string SetSP(); // Set Speciality
    int SetYOE();        // Set Years of Exp
    int SetOTH();        // Set OverTime Hours
    float SetOTHR();     // Set OverTime Hour Rate
    // Getters.
    std::string GetSP(); //  Get Speciality
    int GetYOE();        //  Get Years of Exp
    int GetOTH();        //  Get OverTime Hours
    float GetOTHR();     //  Get OverTime Hour Rate
    // Display.
    void Print();
};
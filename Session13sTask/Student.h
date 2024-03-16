#pragma once
#include <iostream>
#include "Person.h"
class Student : public Person // public Person = inherit everythin in Person and make it at it is (public or Protected).
{
private:
    int student_level;
    float GPA;

public:
    /*Student(std::string n, std::string g, float a, int SL, float gpa) : Person(n, g, a), student_level(SL), GPA(gpa)
    {
    }*/
    float setGPA();
    int setSTUDENTLEVEL();
    float getGPA();
    int getSTUDENTLEVEL();
};

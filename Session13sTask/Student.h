#pragma once
#include <iostream>
#include "Person.h"
class Student : public virtual Person // public Person = inherit everythin in Person and make it at it is (public or Protected).
{
private:
    int student_level;
    float GPA;

public:
    //Constructor.
    Student();
    /*Student  
{}
    Student(std::string n, std::string g, float a, int SL, float gpa) : Person(n, g, a), student_level(SL), GPA(gpa)
    {
    }*/
    //Setters.
    float setGPA();
    int setSTUDENTLEVEL();
    //Getters.
    float getGPA();
    int getSTUDENTLEVEL();
    //Display
     void Display();

};

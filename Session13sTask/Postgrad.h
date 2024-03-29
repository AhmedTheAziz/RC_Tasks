#pragma once
#include <iostream>
#include "Student.h"
 class Postgrad : public Student
 {
    private:
    std::string Research_Intrest;
    public:
    //Constructor.
    Postgrad();
    //Setters.
    std::string setresint();
    //Getters.
    std::string getresint();
   //Display.
   void Display();
 };
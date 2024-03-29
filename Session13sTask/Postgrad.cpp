#include "Postgrad.h"

    //Constructor.
    Postgrad::Postgrad() : Research_Intrest("N/A")
    {}
    //Setters.
     std::string Postgrad::setresint()
    {
        std::cin>>Research_Intrest;
        return Research_Intrest;
    }
    //Getters.
    std::string Postgrad::getresint()
    {
        return Research_Intrest;
    }
    //Display.
    void Postgrad::Display()
    {
        Student::Display();
        std::cout << ", Research Intrest: " << getresint();// << std::endl;
    }

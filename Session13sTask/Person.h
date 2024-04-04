#pragma once
#include <iostream>
class Person
{
private:
    std::string name;
    std::string gender;
    float age ;

public:
    // Constructor.
    Person();
    /*Person(std::string n, std::string g, float a) : name(n), gender(g), age(a)
    {}*/
    // Setters.
    std::string setName();
    std::string setGender();
    float setAGE();
    // Getters.
    std::string getNAME();
    std::string getGENDER();
    float getAGE();
    // Display.
    virtual void Display();
};

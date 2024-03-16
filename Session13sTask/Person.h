#pragma once
#include<iostream>
class Person
{
private:
    std::string name;
    std::string gender;
    float age;

public:
    /*Person(std::string n, std::string g, float a) : name(n), gender(g), age(a)
    {
    }*/
    std::string setName();
    std::string setGender();
    float setAGE();
    std::string getNAME();
    std::string getGENDER();
    float getAGE();
};

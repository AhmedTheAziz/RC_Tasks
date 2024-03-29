// #include <iostream>
#include "Person.h"
// Constructor.
Person::Person() : name("UNKNOWN"), gender("UNKNOWN"), age(0)
{
}
/*Person::Person( std::string n, std::string g,float a) : name(n), gender(g), age(a)
{
}*/
// Setters.
std::string Person::setName()
{
    std::cin >> name;
    return name;
}
std::string Person::setGender()
{
    std::cin >> gender;
    return gender;
}
float Person::setAGE()
{

    std::cin >> age;
    if (age>0 && age<100)
    {
            return age;
    }
    else
    {
        age=0;
        return age;
    }
}
// Getters.
std::string Person::getNAME()
{
    return name;
}
std::string Person::getGENDER()
{
    return gender;
}
float Person::getAGE()
{
    return age;
}
// Display.
 void Person::Display()
{
    if (age == 0)
    {
        std::cout << "Name: " << getNAME() << ", Gender: " << getGENDER() << ", Age: "<< "Unknown" ;// std::endl;
    }
    else
    {
        std::cout << "Name: " << getNAME() << ", Gender: " << getGENDER() << ", Age: " << getAGE() ;// std::endl;
    }
}

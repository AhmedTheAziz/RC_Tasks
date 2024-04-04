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
    std::cout << std::endl
              << "The Name: \n";
    std::cin >> name;
    return name;
}
std::string Person::setGender()
{
    std::cout << std::endl
              << "The Gender: \n";
    std::cin >> gender;
    return gender;
}
float Person::setAGE()
{
again:
    std::cout << "The Age: " << std::endl;
    std::cin >> age;
    if (age > 0 && age < 100)
    {
        this->age;
        return age;
    }
    else
    {
        std::cout << "Error" << std::endl;
        std::cin.clear();            // clear bad input flag
        std::cin.ignore(1000, '\n'); // discard input /*std::numeric_limits<std::streamsize>::max()*/
        std::cout << "Invalid input, please re-enter.\n";
        goto again;
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
        std::cout << "Name: " << name << ", Gender: " << getGENDER() << ", Age: "
                  << "Unknown"; // std::endl;
    }
    else
    {
        std::cout << "Name: " << name << ", Gender: " << getGENDER() << ", Age: " << getAGE(); // std::endl;
    }
}

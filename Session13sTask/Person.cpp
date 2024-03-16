// #include <iostream>
#include "Person.h"
/*Person::Person( std::string n, std::string g,float a) : name(n), gender(g), age(a)
{
}*/
std::string Person::setName()
{
   std::cin>>name;
    return name;
    
}
std::string Person::setGender()
{
  std::cin>>gender;
    return gender;
}
float Person::setAGE()
{
    std::cin>>age;
    return age;
}
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

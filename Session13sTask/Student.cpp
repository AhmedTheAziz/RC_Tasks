#include "Student.h"
//Constructor.
Student::Student() : student_level(0) , GPA(0.0)
{}
/*Student::Student 
{}
Student::Student(std::string n, std::string g, float a, int SL, float gpa) : Person(n, g, a), student_level(SL), GPA(gpa)
{
}*/
//Setters.
float Student::setGPA()
{
    std::cin>>GPA;
    return GPA;
}
int Student::setSTUDENTLEVEL()
{
    std::cin>>student_level ;
    return student_level;
}
//Getters.
float Student::getGPA()
{
    return GPA;

}
int Student::getSTUDENTLEVEL()
{
    return student_level;
}
//Display.
 void Student::Display()
{
    Person::Display();
    if (student_level ==0 && GPA == 0)
    {
    std::cout << ", Student Level: "<< "UNKNOWN"<< ", GPA: " << "UNKNOWN";// << std::endl;
  
    }
    else if(student_level ==0)
    {
    std::cout << ", Student Level: "<< "UNKNOWN" << ", GPA: " << getGPA() ;//<< std::endl;

    }
    else if(GPA ==0)
    {
    std::cout << ", Student Level: "<< getSTUDENTLEVEL() << ", GPA: " << "UNKNOWN" ;//<< std::endl;

    }
    else
    {
     std::cout << ", Student Level: "<< getSTUDENTLEVEL() << ", GPA: " << getGPA() ;//<< std::endl;
    }
}
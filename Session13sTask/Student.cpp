#include "Student.h"
// Constructor.
Student::Student() : student_level(0), GPA(0.0)
{
}
/*Student::Student
{}
Student::Student(std::string n, std::string g, float a, int SL, float gpa) : Person(n, g, a), student_level(SL), GPA(gpa)
{
}*/
// Setters.
float Student::setGPA()
{
    again:
    std::cout << "The GPA: " << std::endl;
    std::cin >> GPA;
        if (GPA > 0 && GPA <= 4)
    {
        this->GPA;
        return GPA;
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
int Student::setSTUDENTLEVEL()
{
    again:
    std::cout << "The Student's Level: " << std::endl;
    std::cin >> student_level;
        if (student_level > 0 && student_level <= 5)
    {
        this->student_level;
        return student_level;
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
float Student::getGPA()
{
    return GPA;
}
int Student::getSTUDENTLEVEL()
{
    return student_level;
}
// Display.
void Student::Display()
{
    Person::Display();
    if (student_level == 0 && GPA == 0)
    {
        std::cout << ", Student Level: "
                  << "UNKNOWN"
                  << ", GPA: "
                  << "UNKNOWN"; // << std::endl;
    }
    else if (student_level == 0)
    {
        std::cout << ", Student Level: "
                  << "UNKNOWN"
                  << ", GPA: " << getGPA(); //<< std::endl;
    }
    else if (GPA == 0)
    {
        std::cout << ", Student Level: " << getSTUDENTLEVEL() << ", GPA: "
                  << "UNKNOWN"; //<< std::endl;
    }
    else
    {
        std::cout << ", Student Level: " << getSTUDENTLEVEL() << ", GPA: " << getGPA(); //<< std::endl;
    }
}
#include "Student.h"

/*Student::Student(std::string n, std::string g, float a, int SL, float gpa) : Person(n, g, a), student_level(SL), GPA(gpa)
{
}*/
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
float Student::getGPA()
{
    return GPA;

}
int Student::getSTUDENTLEVEL()
{
    return student_level;
}
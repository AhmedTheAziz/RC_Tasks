#include "TA.h"
// Constructor
TA::TA() : Subjects("UNKNOWN")
{
}
// Setters.
std::string TA::SetSubjects()
{
    std::cin >> Subjects;
    return Subjects;
}
// Getters.
std::string TA::GetSubjects()
{
    return Subjects;
}
// Display.
void TA::Display()
{
    Student::Display();
    //Employee::Display();

    if (Salary == 0)
    {
        std::cout << ", Salary: "
                  << "N/A"
                  << ", Rank: " << getRANK() << ", Job: " << getJOB(); // std::endl;
    }
    else
    {
        std::cout << ", Salary: " << getSalary() << ", Rank: " << getRANK() << ", Job: " << getJOB(); // std::endl;
    }
    
    std::cout << ", Subject: " << GetSubjects(); // std::endl;
    
}
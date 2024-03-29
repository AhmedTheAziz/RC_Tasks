/*
Ahmed Abdelaziz
Robotics Corner
Session 13's Task
OOP : Copy Constructors, Merge Func(),
*/
#include <iostream>
// #include "Person.h" // name, Gender , AGE.
#include "Student.h"  // Person++ Student_level, GPA.
#include "Employee.h" //Person++ Salary, Rank, JOB.
#include "Postgrad.h" //Person++Student++ Research Intrest.
#include "FullTime.h" // Person++Employee++ Statement.
#include "PartTime.h" //Person++Employee++ Statement.
#include "TA.h"       //Person++Student++Employee++ Subject

// Functions.
void Persons(Person &P);
void Display(Person &P);
void Students(Student &S);
void Display(Student &S);
void Employees(Employee &E);
void Display(Employee &E);
void Postgrads(Postgrad &PG);
void Display(Postgrad &PG);
void FullTimers(FullTime &FT);
void Display(FullTime &FT);
void PartTimers(PartTime &PT);
void Display(PartTime &PT);
void TAs(TA &ta);
void Display(TA &ta);
// Pointers.
Person *ptr_Person;
Student *ptr_Student;
Employee *ptr_Employee;
Postgrad *ptr_Postgrad;
FullTime *ptr_FullTime;
PartTime *ptr_PartTime;
TA *ptr_TA;

int main()
{
    int Q = 0, SQ = 0;
    Person P;
    Student S;
    Employee E;
    Postgrad PG;
    FullTime FT;
    PartTime PT;
    TA ta;

    while (Q >= 0)
    {
        std::cout << "\n Welcome to The Selection list, insert from 1 to 2 to Choose whether to Enter Data, View Data or 0 to close.\n";
        std::cout << "................\n";
        std::cin >> Q;
        std::cout << "................\n";
        // End Task
        if (Q == 0)
        {
            std::cout << "Thank You!!";
            break;
        }
        else if (Q == 1)
        {
            std::cout << "\n Welcome to The Selection list, insert from 1 to 7 to Choose which Data to Enter or 0 to go to the previous List.\n";
            std::cout << "1- Person, 2-Student, 3- Employee, 4-Postgrad, 5- FullTime, 6-PartTime, 7-TA." << std::endl;
            std::cout << "................\n";
            std::cin >> SQ;
            std::cout << "................\n";
            // End Of Data Entry.
            if (SQ == 0)
            {
                std::cout << "Data Entry Ended!!";
               // break;
            }
            // Persons.
            else if (SQ == 1)
            {
                Persons(P);
            }
            // Students.
            else if (SQ == 2)
            {
                Students(S);
            }
            // Employees.
            else if (SQ == 3)
            {
                Employees(E);
            }
            // PostGrads
            else if (SQ == 4)
            {
                Postgrads(PG);
            }
            // FullTimer.
            else if (SQ == 5)
            {
                FullTimers(FT);
            }
            // PartTimer.
            else if (SQ == 6)
            {
                PartTimers(PT);
            }
            // TA
            else if (SQ == 7)
            {
                TAs(ta);
            }
        }
        else if (Q == 2)
        {
            std::cout << "\n Welcome to The Selection list, insert from 1 to 7 to Choose which Data to View or 0 to go to the previous List.\n";
            std::cout << "1- Person, 2-Student, 3- Employee, 4-Postgrad, 5- FullTime, 6-PartTime, 7-TA." << std::endl;
            std::cout << "................\n";
            std::cin >> SQ;
            std::cout << "................\n";
            // End Of Data View.
            if (SQ == 0)
            {
                std::cout << "Data Veiw Ended!!";
               // break;
            }
            // Persons.
            else if (SQ == 1)
            {
                Display(*ptr_Person);
            }
            // Students.
            else if (SQ == 2)
            {
                Display(*ptr_Student);
            }
            // Employees.
            else if (SQ == 3)
            {
                Display(*ptr_Employee);
            }
            // PostGrads
            else if (SQ == 4)
            {
                Display(*ptr_Postgrad);
            }
            // FullTimer.
            else if (SQ == 5)
            {
                Display(*ptr_FullTime);
            }
            // PartTimer.
            else if (SQ == 6)
            {
                Display(*ptr_PartTime);
            }
            // TA
            else if (SQ == 7)
            {
                Display(*ptr_TA);
            }
        }
    }
}
void Persons(Person &P)
{
    // Person P; // Person (Name, Gender , AGE)
    std::cout << std::endl
              << "Please Enter the Name, Gender and Age of a Person!!\n";
    auto psn = P.setName();
    auto psg = P.setGender();
    auto psa = P.setAGE();
    ptr_Person = &P;
}
void Display(Person &P)
{
    // Person P;
    std::cout << std::endl
              << "The data of the Person...\n";
    P.Display();
}
void Students(Student &S)
{
    std::cout << std::endl
              << "Please Enter the Name, Gender, Age, Student Level and GPA of a Student!!\n";
    auto ssn = S.setName();
    auto ssg = S.setGender();
    auto ssa = S.setAGE();
    auto sssl = S.setSTUDENTLEVEL();
    auto ssgp = S.setGPA();
    ptr_Student =&S;
}
void Display(Student &S)
{
    std::cout << std::endl
              << "The data of the Student...\n";
    S.Display();
}
void Employees(Employee &E)
{
    std::cout << std::endl
              << "Please Enter the Name, Gender, Age, Salary, Rank and Job of an Employee!!\n";
    auto esn = E.setName();
    auto esg = E.setGender();
    auto esa = E.setAGE();
    auto ess = E.setSalary();
    auto esr = E.setRank();
    auto esj = E.setJOB();
    ptr_Employee =&E;
}
void Display(Employee &E)
{
    std::cout << std::endl
              << "The data of the Employee...\n";
    E.Display();
}
void Postgrads(Postgrad &PG)
{
    std::cout << std::endl
              << "Please Enter the Name, Gender, Age, Student Level, GPA and Research Intrest of a Post Graduate Student!!\n";
    auto pgsn = PG.setName();
    auto pgsg = PG.setGender();
    auto pgsa = PG.setAGE();
    auto pgssl = PG.setSTUDENTLEVEL();
    auto pgsgp = PG.setGPA();
    auto pgsri = PG.setresint();
    ptr_Postgrad =&PG;
}
void Display(Postgrad &PG)
{
    std::cout << std::endl
              << "The data of the Post Graduate Student...\n";
    PG.Display();
}
void FullTimers(FullTime &FT)
{
    std::cout << std::endl
              << "Please Enter the Name, Gender, Age, Salary, Rank and Job of a Full Time Employee!!\n";
    auto ftsn = FT.setName();
    auto ftsg = FT.setGender();
    auto ftsa = FT.setAGE();
    auto ftss = FT.setSalary();
    auto ftsr = FT.setRank();
    auto ftsj = FT.setJOB();
    ptr_FullTime =&FT;
}
void Display(FullTime &FT)
{
    std::cout << std::endl
              << "The data of the Full Time Employee...\n";
    FT.Display();
}
void PartTimers(PartTime &PT)
{
    std::cout << std::endl
              << "Please Enter the Name, Gender, Age, Salary, Rank and Job of a Part Time Employee!!\n";
    auto ptsn = PT.setName();
    auto ptsg = PT.setGender();
    auto ptsa = PT.setAGE();
    auto ptss = PT.setSalary();
    auto ptsr = PT.setRank();
    auto ptsj = PT.setJOB();
    ptr_PartTime =&PT;
}
void Display(PartTime &PT)
{
    std::cout << std::endl
              << "The data of the Part Time Employee...\n";
    PT.Display();
}
void TAs(TA &ta)
{
    std::cout << std::endl
              << "Please Enter the Name, Gender, Age, Student Level, GPA, Salary, Rank and Subject of a Teacher Assisstant!!\n";
    auto tasn = ta.setName();
    auto tasg = ta.setGender();
    auto tasa = ta.setAGE();
    auto tasl = ta.setSTUDENTLEVEL();
    auto tasgp = ta.setGPA();
    auto tass = ta.setSalary();
    auto tasr = ta.setRank();
    //auto tasj = ta.setJOB();
    auto tasss= ta.SetSubjects();
    ptr_TA =&ta;
}
void Display(TA &ta)
{
    std::cout << std::endl
              << "The data of The Teacher Assisstant...\n";
    ta.Display();
}
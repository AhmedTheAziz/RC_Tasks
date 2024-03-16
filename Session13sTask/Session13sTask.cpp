/*
Ahmed Abdelaziz
Robotics Corner
Session 13's Task
OOP : Copy Constructors, Merge Func(),
*/
#include <iostream>
// #include "Person.h" // name, Gender , AGE
#include "Student.h"  // ++ student_level, GPA
#include "Employee.h" // ++ Salary, Rank, JOB

int main()
{
    std::cout << "Please Enter the Name, Gender and Age of a Person!!\n";
    // std::cin >> psn >> psg >> psa;
    Person P; // Person (Name, Gender , AGE)
    auto psn = P.setName();
    auto psg = P.setGender();
    auto psa = P.setAGE();
    auto pgn = P.getNAME();
    auto pgg = P.getGENDER();
    auto pga = P.getAGE();
    std::cout << "Please Enter the Name, Gender, Age, Student Level and GPA of a Student!!\n";
   // std::cin >> ssn >> ssg >> ssa >> sssl >> ssgp;
    Student S; // ++ student_level, GPA
    auto ssn = S.setName();
    auto ssg = S.setGender();
    auto ssa = S.setAGE();
    auto sssl = S.setSTUDENTLEVEL();
    auto ssgp = S.setGPA();
    auto sgn = S.getNAME();
    auto sgg = S.getGENDER();
    auto sga = S.getAGE();
    auto sgsl = S.getSTUDENTLEVEL();
    auto sggp = S.getGPA();
    std::cout << "Please Enter the Name, Gender, Age, Salary, Rank and Job of an Employee!!\n";
    // std::cin >> esn >> esg >> esa >> ess >> esr >> esj;
    Employee E; // ++ Salary, Rank, JOB
    auto esn = E.setName();
    auto esg = E.setGender();
    auto esa = E.setAGE();
    auto ess = E.setSalary();
    auto esr = E.setRank();
    auto esj = E.setJOB();
    auto egn = E.getNAME();
    auto egg = E.getGENDER();
    auto ega = E.getAGE();
    auto egs = E.getSalary();
    auto egr = E.getRANK();
    auto egj = E.getJOB();
    // DATA & DISPLAY 
    std::cout << "THE data of the Person...\n";
    std::cout << "Name: " << pgn << ", Gender: " << pgg << ", Age: " << pga << std::endl;
    std::cout << "THE data of the Student...\n";
    std::cout << "Name: " << sgn << ", Gender: " << sgg << ", Age: " << sga << ", Student Level: " << sgsl << ", GPA: " << sggp << std::endl;
    std::cout << "THE data of the Employee...\n";
    std::cout << "Name: " << egn << ", Gender: " << egg << ", Age: " << ega << ", Salary: " << egs << ", Rank: " << egr << ", Job: " << egj << std::endl;
}
#include "Engineer.h"
// Constructor.
Engineer::Engineer() : SP("UnKnown"), YOE(0), OTH(0), OTHR(0)
{
}
// Setters.
std::string Engineer::SetSP() // Set Speciality
{
    std::cout << "Speciality:\n";
    std::cin >> SP;
    return SP;
}
int Engineer::SetYOE() // Set Years of Exp
{
    std::cout << "Years of Experince:\n";

again:
    std::cin >> YOE;
    if (YOE > 0)
    {
        this->YOE;
        return YOE;
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
int Engineer::SetOTH() // Set OverTime Hours
{
    std::cout << "OverTime Hours:\n";

again:
    std::cin >> OTH;
    if (OTH > 0)
    {
        this->OTH;
        return OTH;
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
float Engineer::SetOTHR() // Set OverTime Hour Rate
{
    std::cout << "OverTime Hour Rate:\n";

again:
    std::cin >> OTHR;
    if (OTHR > 0)
    {
        this->OTHR;
        return OTHR;
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
std::string Engineer::GetSP() //  Get Speciality
{
    return SP;
}
int Engineer::GetYOE() //  Get Years of Exp
{
    return YOE;
}
int Engineer::GetOTH() //  Get OverTime Hours
{
    return OTH;
}
float Engineer::GetOTHR() //  Get OverTime Hour Rate
{
    return OTHR;
}
// Display.
void Engineer::Print()
{
    Employee::Print();
    if (YOE == 0 && OTH == 0 && OTHR == 0)
    {
        std::cout << ", Speciality: " << SP
                  << ", Years of Experince: "
                  << "UnKnown"
                  << ", OverTime Hours: "
                  << "UnKnown"
                  << ", OverTime Hours Rate: "
                  << "UnKnown"; // std::endl;
    }
    else if (YOE == 0 && OTH == 0)
    {
        std::cout << ", Speciality: " << SP
                  << ", Years of Experince: "
                  << "UnKnown"
                  << ", OverTime Hours: "
                  << "UnKnown"
                  << ", OverTime Hours Rate: "
                  << OTHR; // std::endl;
    }
    else if (OTH == 0 && OTHR == 0)
    {
        std::cout << ", Speciality: " << SP
                  << ", Years of Experince: "
                  << YOE
                  << ", OverTime Hours: "
                  << "UnKnown"
                  << ", OverTime Hours Rate: "
                  << "UnKnown"; // std::endl;
    }
    else if (YOE == 0 && OTHR == 0)
    {
        std::cout << ", Speciality: " << SP
                  << ", Years of Experince: "
                  << "UnKnown"
                  << ", OverTime Hours: "
                  << OTH
                  << ", OverTime Hours Rate: "
                  << "UnKnown"; // std::endl;}
    }
    else if (YOE == 0)
    {
        std::cout << ", Speciality: " << SP
                  << ", Years of Experince: "
                  << "UnKnown"
                  << ", OverTime Hours: " << OTH
                  << ", OverTime Hours Rate: " << OTHR; // std::endl;
    }
    else if (OTH == 0)
    {
        std::cout << ", Speciality: " << SP
                  << ", Years of Experince: " << YOE
                  << ", OverTime Hours: "
                  << "UnKnown"
                  << ", OverTime Hours Rate: " << OTHR; // std::endl;
    }
    else if (OTHR == 0)
    {
        std::cout << ", Speciality: " << SP
                  << ", Years of Experince: " << YOE
                  << ", OverTime Hours: " << OTH
                  << ", OverTime Hours Rate: "
                  << "UnKnown"; // std::endl;
    }
    else
    {
        std::cout << ", Speciality: " << SP
                  << ", Years of Experince: " << YOE
                  << ", OverTime Hours: " << OTH
                  << ", OverTime Hours Rate: " << OTHR; // std::endl;
    }
}
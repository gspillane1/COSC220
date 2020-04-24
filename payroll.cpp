#include "payroll.h"
#include <iostream>


using namespace std; /// shouldnt there only need to be one of these per project?



//constructor
PayRoll::PayRoll()
{
    hoursWorked = 0;
    name = "No Name Magee";
    payrate = 0;

}
PayRoll::~PayRoll()
{


}
// set functions
void PayRoll::Setname(string input)
{
    name = input;
}
void PayRoll::Setpayrate(double input)
{
    payrate = input;
}
void PayRoll::SetHoursWorked(double input)
{
    hoursWorked = input;
}

// get functions

string PayRoll::Getname()
{
    return name;
}

double PayRoll::Getpayrate()
{
    return payrate;
}
double PayRoll::GethoursWorked()
{
    return hoursWorked;
}

double PayRoll::totalpay()
{
    return payrate * hoursWorked;
}


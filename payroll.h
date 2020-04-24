///#ifndef PAYROLL_H
///#define PAYROLL_H
///#include "payroll.cpp"
#include <iostream>

#pragma once
using namespace std;

class PayRoll
{
private:
    string name;
    double payrate;
    double hoursWorked;

public:
    // set functions
    void Setname(string input);
    void Setpayrate(double input);
    void SetHoursWorked(double input);

    // get functions
    string Getname();
    double Getpayrate();
    double GethoursWorked();

    // other functions
    double totalpay();
    void print(PayRoll []);
    //constructor
    PayRoll();
    //deconstructor
    ~PayRoll();
}
;

///#endif

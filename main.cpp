#include <iostream>
#include <MyStack.h>
#include "payroll.h"

using namespace std;

int main()
{
MyStack<int> int_Stack;
MyStack<double> double_Stack;
MyStack<string> str_Stack;
MyStack<PayRoll> PayRoll_Stack;

cout <<"Testing of int stack:"<<endl; /// test of int

int_Stack.push(10);
int_Stack.push(20);
int_Stack.push(30);
int_Stack.push(40);

int_Stack;


cout <<"Popping off the top: " << int_Stack.peek() <<endl;
int_Stack.pop();

int_Stack;

cout <<"Testing of double stack: " <<endl; /// test of double stack

double_Stack.push(52.5);
double_Stack.push(74.4);
double_Stack.push(66.6);
double_Stack.push(54.7);

cout <<"Popping off the top: " << double_Stack.peek() <<endl;
double_Stack.pop();

double_Stack;

cout << "Test of string stack: " << endl;

str_Stack.push("Hello");
str_Stack.push("My name");
str_Stack.push("is");
str_Stack.push("Griffin");

cout <<"Popping off the top: " << str_Stack.peek() <<endl;
str_Stack.pop();

str_Stack;

cout << "Test of payroll stack: " << endl;

/// hard coded employees and data
PayRoll employee1;
employee1.SetHoursWorked(10);
employee1.Setname("Steven");
employee1.Setpayrate(4);

PayRoll_Stack.push(employee1);

PayRoll employee2;
employee2.SetHoursWorked(20);
employee2.Setname("Marcus");
employee2.Setpayrate(5);

PayRoll_Stack.push(employee2);

PayRoll employee3;
employee3.SetHoursWorked(40);
employee3.Setname("Griffin");
employee3.Setpayrate(15);

PayRoll_Stack.push(employee3);

cout <<"Popping off the top: ";
PayRoll_Stack.peek();
cout <<endl;
PayRoll_Stack.pop();

PayRoll_Stack;


    cout << "end of program" << endl;
    return 0;
}

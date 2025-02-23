// 1. Write a C++ program to implement a class called Employee that has private
// member variables for name, employee ID, and salary. Include member functions to
// calculate and set salary based on employee performance.

#include <iostream>
#include "Employee.h"
using namespace std;

int main () {
    Employee Aarohan; 
    Aarohan.set_name ("Aarohan");
    Aarohan.set_id(13);
    Aarohan.set_salary(5000);

    cout << "Employee details are as follows: " <<endl;
    cout << "Employee name: " << Aarohan.get_name() << endl;
    cout << "Employee id: " << Aarohan.get_id() << endl;
    cout << "Employee salary: " << Aarohan.get_salary() << endl;
    cout << "Enter Performance Metric (p from[1-100]) : ";
    float p;
    cin >> p;
    cout << "Revised Employee salary is " << Aarohan.calculate_salary(Aarohan.get_salary(),p) <<endl;
    Aarohan.set_salary(Aarohan.calculate_salary(Aarohan.get_salary(),p)); //just updating


}
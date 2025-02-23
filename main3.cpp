// 3. Write a C++ program to implement a class called Student that has private member
// variables for name, class, roll number, and marks. Include member functions to
// calculate the grade based on the marks and display the student's information.

#include <iostream>
#include "Date.h"
using namespace std;

int main () {
    Date today_date;
    today_date.set_day(22);
    today_date.set_month(02);
    today_date.set_year(2025);

    Date mercy_date;
    mercy_date.set_day(420);
    mercy_date.set_month(69);
    mercy_date.set_year(0000);

    cout << "Date Details: " <<endl;

    cout << today_date.get_day() << "/" << today_date.get_month() << "/" << today_date.get_year();
    cout << ((today_date.isValid(today_date.get_day(),today_date.get_month(),today_date.get_year()))? " is " : " isn't " );
    cout << "a valid date" <<endl;

    cout << mercy_date.get_day() << "/" << mercy_date.get_month() << "/" << mercy_date.get_year();
    cout << ((mercy_date.isValid(mercy_date.get_day(),mercy_date.get_month(),mercy_date.get_year()))? " is " : " isn't ") ;
    cout << "a valid date" <<endl;

}
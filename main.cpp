// 3. Write a C++ program to implement a class called Student that has private member
// variables for name, class, roll number, and marks. Include member functions to
// calculate the grade based on the marks and display the student's information.

#include <iostream>
#include "student.h"
using namespace std;

int main () {
    Student Aarohan; 
    Aarohan.set_name ("Aarohan");
    Aarohan.set_class(13);
    Aarohan.set_roll(1);
    Aarohan.set_marks(95);

    cout << "Student details are as follows: " <<endl;
    cout << "Student name: " << Aarohan.get_name() << endl;
    cout << "Student class: " << Aarohan.get_class() << endl;
    cout << "Student roll: " << Aarohan.get_roll() << endl;
    cout << "Student grade: " << Aarohan.calculate_grade(Aarohan.get_marks())<<endl;

    cout << endl;

    Student Radha; 
    Radha.set_name ("Radha");
    Radha.set_class(16);
    Radha.set_roll(32);
    Radha.set_marks(45);

    cout << "Student details are as follows: " <<endl;
    cout << "Student name: " << Radha.get_name() << endl;
    cout << "Student class: " << Aarohan.get_class() << endl;
    cout << "Student roll: " << Radha.get_roll() << endl;
    cout << "Student grade: " << Radha.calculate_grade(Radha.get_marks())<<endl;
    
}
#include<string>
#include<iostream>

#include "student.h"

using std::string;
using std::cout;
using std::endl;


string Student::get_name() const{
    return name;
}

void Student::set_name(string n){
    name = n;
}

float Student::get_marks() const{
    return marks;
}

void Student::set_marks(float m){
    marks = m;
}

int Student::get_class() const{
    return cls;
}

void Student::set_class(int c){
    cls = c;
}

int Student::get_roll() const{
    return roll;
}

void Student::set_roll(int r){
    roll = r;
}

float Student::calculate_grade (float marks) {
    if (marks >= 90) {
        return 4.0;
    } else if (marks >=80) {
        return 3.6;
    }
    else if (marks >=65) {
        return 3.2;
    }
    else if (marks >=40) {
        return 2.5;
    }
    else {
        return 0;
    }
}

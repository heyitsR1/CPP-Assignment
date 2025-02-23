#include<string>
#include<iostream>

#include "Employee.h"

using std::string;
using std::cout;
using std::endl;


string Employee::get_name() const{
    return name;
}

void Employee::set_name(string n){
    name = n;
}

float Employee::get_salary() const{
    return salary;
}

void Employee::set_salary(float s){
    salary = s;
}

int Employee::get_id() const{
    return id;
}

void Employee::set_id(int i){
    id = i;
}


float Employee::calculate_salary (float salary, float p) {
    if (p >= 90) {
        return 2*salary;
    } else if (p >=80) {
        return 1.5*salary;
    }
    else if (p >=65) {
        return 1.2*salary;
    }
    else if (p >=40) {
        return 1.1* salary;
    }
    else {
        return salary;
    }
}

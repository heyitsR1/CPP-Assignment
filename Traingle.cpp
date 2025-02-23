#include<string>
#include<iostream>

#include "Triangle.h"

using std::cout;
using std::endl;


float Triangle::get_a() const{
    return a;
}

void Triangle::set_a(float x){
    a = x;
}
float Triangle::get_b() const{
    return b;
}

void Triangle::set_b(float y){
    b = y;
}
float Triangle::get_c() const{
    return c;
}

void Triangle::set_c(float z){
    c = z;
}

std::string Triangle::type(float a, float b, float c) {
    if (a == b && b ==c ) {
        return "Equilateral";
    } else if (a ==b || b==c || a==c ) {
        return "Isosceles";
    } else {
        return "Scalene";
    }
}



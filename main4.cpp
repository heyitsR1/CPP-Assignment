// 4. Write a C++ program to create a class called Triangle that has private member
// variables for the lengths of its three sides. Implement member functions to
// determine if the triangle is equilateral, isosceles, or scalene.

#include <iostream>
#include "Triangle.h"
using namespace std;

int main () {
    Triangle t1;
    t1.set_a(10.2);
    t1.set_b(10.2);
    t1.set_c(10.2);

    Triangle t2;
    t2.set_a(10);
    t2.set_b(20);
    t2.set_c(30);

    Triangle t3;
    t3.set_a(10.3);
    t3.set_b(10.2);
    t3.set_c(10.2);

    cout << "Triangle Details: " <<endl;
    cout << "Sides are: " << t1.get_a() << " " <<t1.get_b() <<" " << t1.get_c() <<endl;
    cout << t1.type(t1.get_a(),t1.get_b(),t1.get_c())<< " triangle" <<endl;

    cout << endl;

    cout << "Triangle Details: " <<endl;
    cout << "Sides are: " << t2.get_a() << " " <<t2.get_b()<<" "<< t2.get_c() <<endl;
    cout << t2.type(t2.get_a(),t2.get_b(),t2.get_c())<< " triangle" <<endl;

    cout << endl;


    cout << "Triangle Details: " <<endl;
    cout << "Sides are: " << t3.get_a() << " " <<t3.get_b()<<" "<< t3.get_c() <<endl;
    cout << t3.type(t3.get_a(),t3.get_b(),t3.get_c())<< " triangle" <<endl;

}
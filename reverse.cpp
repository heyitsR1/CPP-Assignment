//question number 1
#include <iostream>
#include <string>
using std::cout, std::endl, std::cin;

int main () { 
    std::string f_name, l_name;
    std::cout << "Enter first name : ";
    std::cin >> f_name;
    std::cout << "Enter last name : ";
    std::cin >> l_name;
    std::cout << "Full name in specified format is : " << l_name << " " << f_name <<std::endl;
}
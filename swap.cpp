#include <iostream> 

int main () {
    int a = 5; 
    int b = 10; 
    std::cout << "Before swap, a is " << a << " and b is " << b <<std::endl;
    std::swap(a,b);
    std::cout << "After swap, a is " << a << " and b is " << b <<std::endl;

}
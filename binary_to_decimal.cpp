#include <iostream>
#include <string>
using std::cout, std::endl, std::cin, std::string;

int main () { 
    string binary;
    int decimal = 0;
    cout << "Enter in binary: " << endl;
    cin >> binary;

    for (char bit : binary) {
        //using leftshift (multiplies number by 2), then OR operation with the current bit
        //effectively converts binary to decimal
        decimal = decimal << 1 | (bit-48); //bit is char so here it'll give 48 if 0 or 49 if 1
    }
    cout <<"In decimal is " << decimal<<endl;
}
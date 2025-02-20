//question 20 
#include <iostream>
#include <string>
using std::cout, std::endl, std::cin, std::string;

int main () { 
    //so decimal to hex huh
    //generally just divide by 16 ani remainder lai either represent as is or (A to E based on 10-15)
    int x, y;
    string z,output;
    cout << "Enter a decimal number: ";
    cin >> x;
    while (x>0) {
        y = x % 16;
        x= x/16;
        switch (y) {
            case 10:
                z = 'A';
                break;
            case 11:
                z = 'B';
                break;
            case 12:
                z = 'C';
                break;
            case 13:
                z = 'D';
                break;
            case 14:
                z = 'E';
                break;
            case 15:
                z = 'F';
                break;
            default:
                z = std::to_string (y);
        }
        output = z + output;

    }
        cout << "The hexadecimal number is " << output <<endl;
}
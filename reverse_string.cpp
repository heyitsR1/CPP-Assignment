#include <iostream> 
#include <string>
using std::cin, std::cout, std::endl, std::string;

int main () {
    string input,output;
    cout << "Input a string : "; 
    cin >> input; 
    int length  = input.length();
    cout << "Reverse is : "; 

    for (int i =0 ; i < length; i++){
        output [i] = input [length-i-1];
        cout << output [i];
    }
    cout << endl;
    return 0;

}
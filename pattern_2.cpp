// 0. Write a program in C++ to display the pyramid pattern using the alphabet.
// Sample Output:
// Input the number of Letters (less than 26) in the Pyramid: 5
// A
// A B A
// A B C B A
// A B C D C B A
// A B C D E D C B A

#include <iostream>
#include <string>
using std::cout,std::cin,std::endl,std::string;

int main () {
    int n,track=0;
    cout << "Input number of letters (less than 26) in the Pyramid: ";
    cin >> n;
    if (n > 25 || n < 0 ) { 
        cout << "Please enter a valid value";
        return 1;
    }
    for (int i=1; i <=n; i++) {
        for (int k = i; k < n; k++) {
            cout << "  ";
        }
        for (int j=65; j<i+65; j++) {
            cout << char(j) <<" ";         
            track = j;
        }
        for (int j = track-1 ; j > 64; j--) {
            cout << char(j)<<" ";         
        }
            cout<< endl;
    }
    return 0;
}
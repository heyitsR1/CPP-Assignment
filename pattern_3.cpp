// Write a program in C++ to display such a pattern for n number of rows using
// numbers. There will be odd numbers in each row. The first and last number of each
// row will be 1 and the middle column will be the row number. N numbers of columns
// will appear in the 1st row.
// Sample Output:
// Input number of rows: 7
#include <iostream>
using std::cout,std::cin,std::endl;

int main () {
    int n,track;
    cout << "Input numner of rows: ";
    cin >> n;
    for (int i=n; i >= 1; i--) {
        for (int k = i; k < n; k++) {
            cout << " ";
        }
        for (int j=1; j<=i; j++) {
            cout << j;         
            track = j;
        }
        for (int j = track-1 ; j > 0; j--) {
            cout << j;       
        }
            cout<< endl;
    }
    return 0;
}
// Write a C++ program to display Pascal's triangle like a right angle triangle.
// Sample Output:
// Input number of rows: 7
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// 1 6 15 20 15 6 1
// Write a program in C++ to display such a pattern for n number of rows using
// numbers. There will be odd numbers in each row. The first and last number of each
// row will be 1 and the middle column will be the row number. N numbers of columns
// will appear in the 1st row.
// Sample Output:
// Input number of rows: 7

#include <iostream>
#include <math.h> 
using std::cout,std::cin,std::endl;


int fact (int x)  { 
    if  (x>1) {
        return x* fact(x-1);
    } else {
        return 1;
    }
}

int main () {
    int n,c;
    cout << "Input numner of rows: " ;
    cin >> n;
    for (int i=0; i < n; i++) {
        for (int j = 0; j <=i; j++) {
            // cout << "i is " << i << " and j is " << j  << " "<< fact (i) << " "<< fact (j)<< " " << fact (i-j);
            c = fact (i) / (fact (j) * fact (i-j));
            cout << c << " ";
         };
         cout<< endl;
     }
    return 0;
}
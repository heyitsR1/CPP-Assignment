// Write a C++ program to create an n x n matrix by taking an integer (n) as input from
// the user.
// Example:
// Input: 2
// 2 2
// 2 2
#include <iostream>
#include <algorithm>
using std::cin, std::cout,std::endl, std::vector;

int main () {
    int n;
    cout << "Enter value of n for the matrix: ";
    cin >> n;
    vector <vector<int> > matrix (n,vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j =0; j< n; j++) {
            matrix [i][j] =n; //just in case you'd want to do something else in the future
            cout << matrix [i][j] << " ";
        }
        cout << endl;
    }
}
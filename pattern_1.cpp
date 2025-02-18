// Write a C++ program to make such a pattern like a right angle triangle with the
// number increased by 1.
// Sample Output:
// Input number of rows: 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using std::cout;
using std::cin; 
using std::endl;

int main () {
    int n, count=1;
    cout << "Input numner of rows: ";
    cin >> n;
    for (int i=0; i <n; i++) {
        for (int j=0; j<=i; j++) {
            cout << count << " "; 
            count++;
        }
        cout<< endl;
    }
    return 0;
}
/*Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + … up to ‘n’
terms.
Sample Output:
Input number of terms: 5
1 + 11 + 111 + 1111 + 11111
The sum of the series is: 12345*/

#include <iostream> 
using std::cout, std::endl, std::cin;

int main () {
    int n,sum;
    std::string x;
    cout << "Input number of terms: " ; 
    cin >> n;
    if (n == 0) {
        return 0;
    }
    for (int i=0; i < n; i++) {
            x +='1'; 
            cout << x;
            sum += stoi(x);
            if (i+1 == n) {
                break;
            }
            cout << " + ";
    }
    cout << endl << "Sum is " << sum << endl; 
}
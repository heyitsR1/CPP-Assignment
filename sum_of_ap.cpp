/*. Write a C++ program to find the sum of an A.P. series.
Sample Output:
Input the starting number of the A.P. series: 1
Input the number of items for the A.P. series: 8
Input the common difference of A.P. series: 5
The Sum of the A.P. series are :
1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148*/

#include <iostream> 
using std::cout, std::endl, std::cin;

int main () {
    int a, n, d,x, sum =0; 
    cout << "Enter starting number of AP series: ";
    cin >> a;
    cout << "Enter number of items in the AP series: ";
    cin >> n;
    cout << "Enter the common difference of AP series: ";
    cin >> d;
    /* Easy alternate is to use a formula like this 
    sum =  n/2 *((2*a + (n-1)*d));
    But we are to use a loop and print individual terms too*/
    x = a;
    for (int i=0; i< n; i++ ) {
        sum += x;
        cout << x;
        x += d;
        if (i+1 ==n ) {
            break;
        }
        cout << " + ";
    }
    cout << endl << "Sum is " << sum << endl;
    
}
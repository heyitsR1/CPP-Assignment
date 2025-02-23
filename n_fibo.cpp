#include <iostream>
using namespace std; 

int n_fibo(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    return (n_fibo(n-1) + n_fibo (n-2));
}

int main () {
    cout << "Enter 'n' fibonacci you want to look for: "; 
    int n;
    cin >> n;
    cout << "It is " << n_fibo(n) << endl;
}
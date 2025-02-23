#include <iostream>
using namespace std;

int fact (int n) {
    if (n == 1) {
        return 1;
    }
    return n *fact (n-1);
}

int main () { 
    cout << "Enter n: "; 
    int n;
    cin >> n;
    cout << "Factorial is: " << fact(n) <<endl;
}
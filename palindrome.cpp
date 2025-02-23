// 4. Write a C++ program to reverse a string using recursion.
// 5. Write a C++ program to implement a recursive function to check if a given string is a
// palindrome
#include <iostream>
#include <string>
using namespace std; 

string reverse_string (string st, int pos, int size) {
    if (pos == -1) {
        return ""; 
    }
    return st[pos] + reverse_string (st,pos-1, size);
}
bool is_palindrome (string st) {
    return st == reverse_string(st,st.size()-1, st.size());
}

int main () {
    cout << "Enter a string: "; 
    string st;
    cin >> st;
    if (is_palindrome(st)) {
        cout << "Yes, it is a palindrome" << endl;
    }else{
        cout << "No, it is not a palindrome" << endl;
    }
    
}
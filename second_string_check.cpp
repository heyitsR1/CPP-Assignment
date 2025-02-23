// Write a C++ program to verify that all of the letters in the second string appear in the
// first string as well. Return true otherwise false.
// Example:
// Original String elements: Python Py
// Check - First string contains all letters from second string: true
#include <iostream> 
#include <vector>
#include <string>
#include <sstream>
#include <cctype>
#include <algorithm>
using std::cout,std::cin,std::endl, std::swap,std::vector, std::string; 

int main () { 
    cout << "Original String Elements: " << endl;
    string in;
    getline(cin,in);

    std::istringstream iss(in); //string turns to a stream to read input, this is a cool function
    vector <string> words;
    string word;

    while (iss >> word ) { 
        words.push_back(word);
    }
    if ((words.end()-words.begin()) != 2) {
        cout << "Only accepts two strings as input";
        return 1;
    }
    cout << "First string contains all letters from second string: ";
    if (words[0].find(words[1]) != string::npos) {
        cout << "True " <<endl;
    }
    else {
        cout << "False " <<endl;
    }
    

}

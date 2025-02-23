// Write a C++ program to capitalize the first character of each element of a given
// string vector. Return the vector.
// Example:
// Original Vector elements:
// red green black white Pink
// Capitalize the first character of each vector element:
// Red Green Black White Pink

#include <iostream> 
#include <vector>
#include <string>
#include <sstream>
#include <cctype>
using std::cout,std::cin,std::endl, std::swap,std::vector, std::string; 


int main () { 
    cout << "Original Vector Elements: " << endl;
    string in;
    getline(cin,in);

    std::istringstream iss(in); //string turns to a stream to read input, this is a cool function
    vector <string> words;
    string word;

    while (iss >> word ) { 
        words.push_back(word);
    }
    cout << "Capitalize the first character of each vector element:" <<endl;
    for (string& word: words) {      
        if (!word.empty ()) {
            word[0] = toupper(word[0]);
        }
    }
    for (const string& word:words) {
        cout << word << " ";
    }
    cout <<endl;
 }

// Write a C++ program that takes a vector of strings and returns only those strings that
// contain a number(s). Return an empty vector if none.
// Example:
// Original Vector elements:
// red green23 1black white
// Find strings that contain a number(s) from the said vector:
// green23 1black


#include <iostream> 
#include <vector>
#include <string>
#include <sstream>
#include <cctype>
#include <algorithm>
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

    cout << "Find strings that contain a number(s) from the said vector: " <<endl;
    for (const string& word:words) {
        if (std::any_of(word.begin(),word.end(),::isdigit)){
            cout << word << " ";
        }
    }
    cout <<endl;
 }

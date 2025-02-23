// // Write a C++ program that returns the elements in a vector that are strictly smaller
// than their adjacent left and right neighbours.
// Example:
// Original Vector elements:
// 1 2 5 0 3 1 7
// Vector elements that are smaller than its adjacent neighbours:
// 0
// 1

#include <iostream> 
#include <vector>
#include <string>
#include <sstream>
using std::cout,std::cin,std::endl, std::swap,std::vector, std::string; 


int main () { 
    cout << "Enter elements seperated by spaces: ";
    string in;
    getline(cin,in);

    std::istringstream iss(in); //string turns to a stream to read input, this is a cool function
    vector <int> arr;
    int num;

    while (iss >> num ) { // like doing cin >> num, we extracting each value and putting to num while there's still data
        arr.push_back(num);
    }
    int n = arr.size();
    cout << "Vector elements that are smaller than its adjacent neighbours: " <<endl;
    for (int i =1; i < n-1;i++) {
        if (arr[i]< arr[i-1] && arr[i] < arr [i+1]) {
            cout << arr [i] <<endl;
        }
    }
    cout <<endl; 

 }

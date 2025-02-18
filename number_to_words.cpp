// Write a C++ program to convert a given non-negative integer into English words.
// Example:
// Sample Input: 12
// Sample Output: Twelve
// Sample Input: 29
// Sample Output: Twenty Nine

//can disregard the number_to_words function and just use process chunks if we limit input to <999. 

#include <iostream> 
#include <string>
using namespace std;

string ones [] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven","Eight", "Nine"};
string teens [] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen","Eighteen", "Nineteen",};
string tens [] = {"","Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy","Eighty", "Ninety", "Hundred"};
string thousands [] = {"", "Thousand", "Million", "Billion", "Trillion"};

string number_to_words (int n);
string greater_than_999 (int n);
string result = "";

int main () {
    int n;
    cout << "Input: "; 
    cin >> n;

    if (n == 0) {
        cout << "Output: Zero" << endl;
    } else {
        cout << "Output: " << number_to_words(n) << endl;
    }

}

string process_chunks (int n) {
    if (n == 0) { return "Zero";}

    if (n > 100) {
        result += ones[n/100] + " Hundred ";
        n = n%100;
    }
    if (n >= 11 && n <= 19) {
        result += teens[n - 11] + " ";
        return result;
    } else if (n >= 10) {
        result += tens[n / 10] + " ";
        n %= 10;
    }
    if (n > 0) {
        result += ones[n] + " ";
    }
    return result;
    
}
string number_to_words (int n) {
    string result = " ";
    int chunk_index = 0; 
    while (n>0) {
        int chunk = n % 1000;
        if (chunk > 0 ) {
            string chunk_words = process_chunks (chunk);
            result = chunk_words + (thousands[chunk_index] != " " ? thousands[chunk_index]+ " " : " ");
        }
        n /=1000;
        chunk_index++;
    }
    return result;
}
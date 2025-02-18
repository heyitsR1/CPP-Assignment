// Write a C++ program to find a word in a given string that has the highest number of
// repeated letters.
// Example:
// Sample Input: Print a welcome text in a separate line.
// Sample Output: Word which has the highest number of repeated letters. Separate

//Who needs modular code anyway  ¯\_(ツ)_/¯
//this probably can be done much cleaner and more efficiently 
//just went by breaking down problem piece by piece till it became a for loop wrapper haha

#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int track = 0, word_count, word_count_tracker = 0;
    string input, word_with_max_freq;
    int max_freq = 0;

    cout << "Input a string: "; 
    getline(cin, input); 
    input.append(" ");  // Space to count the last word

    word_count = count(input.begin(), input.end(), ' ');

    // words or sub_string inside the string
    string sub[word_count];
    int c_greatest[word_count];
    int c_sum[word_count];

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == ' ') {
            sub[word_count_tracker] = input.substr(track, i - track);
            int sub_length = sub[word_count_tracker].length();
            int c[sub_length];

            //intialize freq of letters 0
            for (int i = 0; i < sub_length; i++) {
                c[i] = 0;
            }
            c_greatest[word_count_tracker] = 0;
            c_sum[word_count_tracker] = 0;

            // Repeated letters in the current word
            for (int k = 0; k < sub_length; k++) {
                for (int l = 0; l < sub_length; l++) {
                    if (sub[word_count_tracker][k] == sub[word_count_tracker][l] && sub[word_count_tracker][k] != ' ') {
                        c[k]++;
                    }
                }
            }

            // Sum of repeated letters and the greatest frequency in the current word
            for (int k = 0; k < sub_length; k++) {
                c_sum[word_count_tracker] += c[k];
                if (c[k] > c_greatest[word_count_tracker]) {
                    c_greatest[word_count_tracker] = c[k];
                }
            }

            // Word with the Highest repeated letters
            if (c_sum[word_count_tracker] > max_freq) {
                max_freq = c_sum[word_count_tracker];
                word_with_max_freq = sub[word_count_tracker];
            }

            word_count_tracker++;
            track = i + 1;  // Next word
        }
    }

    cout << "Word with the highest number of repeated letters: " << word_with_max_freq << endl;

    return 0;
}

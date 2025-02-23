// Write a C++ program to find the third largest string in a given array of strings.
// Write a C++ program to update every array element by multiplication of the next and
// previous values of a given array of integers.

#include <iostream> 
#include <algorithm>
#include <vector>
using std::cout,std::cin,std::endl, std::swap,std::vector, std::string; 

vector <string> get_array (int n);
void print_array (const vector <string>& arr);
string third_largest (const vector <string> & arr);

int main () { 
    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    if (n > 100) {
        cout << "Size cannot exceed 100"<<endl;   
        return 1;
    } else if (n <= 2) {
        cout << "Size cannot be less than 3"<<endl;   
        return 1;
    }
    vector <string> arr = get_array(n);
    cout << "Third Largest String is: " << third_largest(arr) <<endl;
}

vector <string> get_array (int n) {
    vector <string> arr(n);
    for (int i=0; i < n; i++) {
        cout << "Enter element " << i+1 << " : ";
        cin >> arr [i];  
    }
    return arr;  
}

string third_largest (const vector <string>& arr) {
    int n = arr.size();
    vector <string> temp = arr;
    sort(temp.begin(), temp.end());
    return temp[n-3];

    // for (int i=0; i < n-1; i++) {
    //     for (int j = 0; j < n-1-i; j++) {
    //         if (temp[j] > temp[j+1]) {
    //             swap (temp[j],temp[j+1]);
    //         }
    //     }
    // }
    // return temp[n-3]; // can customize sorting logic if needed
}

// a custom print array if needed for future string array based logic
// void print_array (const vector <string>& arr){ 
//     cout << "Array is : "; 
//     for (const string& str: arr) {
//         cout << str << " ";  
//     }
//     cout << endl;
//     }
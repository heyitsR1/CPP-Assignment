// Write a C++ program to find the sum of all elements in an array using recursion.
#include <iostream>
using namespace std;

int sum_array(int arr[], int pos, int n) {
    if (pos == n) {
        return 0;
    }
    return arr[pos] + sum_array(arr, pos + 1, n);
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];  
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int sum = sum_array(arr, 0, n);
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}

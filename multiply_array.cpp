// Write a C++ program to update every array element by multiplication of the next and
// previous values of a given array of integers.

#include <iostream> 
using std::cout,std::cin,std::endl, std::swap; 

int* get_array (int n);
void multiply_elements_array (int* arr, int size);
void print_array (int* arr, int size);
const int MAX_SIZE = 100;
int array [MAX_SIZE];

int main () { 
    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    if (n > 100) {
        cout << "Size cannot exceed 100"<<endl;   
        return 1;
    } else if (n < 2) {
        cout << "Size cannot be less than 2"<<endl;   
        return 1;
    }
    int* arr = get_array(n);
    multiply_elements_array (arr,n);
    print_array (arr,n);
}

void multiply_elements_array (int* arr, int size) {
    int new_arr [size];

    new_arr [0] = arr [0] * arr [1];
    new_arr [size-1] = arr [size-1]* arr[size-2]; 
    //edge cases

    for (int i =1 ; i < size-1; i++){
        new_arr [i] = arr[i-1] * arr [i] * arr [i+1];
    }
    for (int i =0 ; i < size; i++){
        arr [i] = new_arr [i]; //updating the og array
    }
}

int* get_array (int n) {
    for (int i=0; i < n; i++) {
        cout << "Enter element " << i+1 << " : ";
        cin >> array [i];  
    }
    return array;  
}

void print_array (int* arr, int n){ 
    cout << "Array is : "; 
    for (int i=0; i < n; i++) {
        cout << arr [i] << " ";  
    }
    cout << endl;
    }
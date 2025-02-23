//Write a C++ program to find the k largest elements in a given array of integers.

#include <iostream> 
using std::cout,std::cin,std::endl, std::swap; 

int* get_array (int n);
void print_array (int* arr, int size);
int* get_N_largest(int* arr, int size,int* N_largest, int N_SIZE);
const int MAX_SIZE = 100;
int N_SIZE = 0;
int array [MAX_SIZE];

int main () { 
    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    if (n > 100) {
        cout << "Size cannot exceed 100"<<endl;   
        return 1;
    }
    cout << "Enter number of largest elements to find : ";
    cin >> N_SIZE;
    if (N_SIZE> n) {
        cout << "Size cannot exceed array size"<<endl;   
        return 1;
    }
    int N_largest[N_SIZE];
    int* arr = get_array(n);
    get_N_largest(arr,n,N_largest, N_SIZE);
    cout << "Following output is the " << N_SIZE << " largest elements" << endl;
    print_array (N_largest,N_SIZE);
}



int* get_array (int n) {
    for (int i=0; i < n; i++) {
        cout << "Enter element " << i+1 << " : ";
        cin >> array [i];  
    }
    return array;  
}

int* get_N_largest (int* arr, int n, int* N_largest, int N_SIZE) {
    for (int i=0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                swap (arr[j],arr[j+1]);
            }
        }
    }
    for (int i = 0; i < N_SIZE; i++) {
        N_largest [i] = arr [n-i-1];
    }
    return N_largest;
}


void print_array (int* arr, int n){ 
    cout << "Array is : "; 
    for (int i=0; i < n; i++) {
        cout << arr [i] << " ";  
    }
    cout << endl;
    }
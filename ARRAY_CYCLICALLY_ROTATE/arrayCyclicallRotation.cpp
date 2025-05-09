#include <iostream>
#include <vector>
using namespace std;

void rotateByOne(int arr[], n) {
    int last = arr[n-1];
    for (int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}

void printArray(int arr[], int n){
  for (int i=0; i<n; i++)
        cout << arr[i] << " ";
     cout<< "\n";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);

    rotateByOne(arr, n);

    cout << "\nRotated array: ";
    printArray(arr, n);

    return 0;
}


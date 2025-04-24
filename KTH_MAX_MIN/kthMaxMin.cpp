
#include <iostream>
using namespace std;

// Ascending order sorting function (Bubble Sort)
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 9, 3, 1, 4, 0, 7, 8, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    cout << "Original array: ";
    printArray(arr, n);

    cout << "Enter the value of k: ";
    cin >> k;

    sortArray(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    if (k > 0 && k <= n) {
        cout << "K-th Minimum (" << k << "-th): " << arr[k - 1] << endl;
        cout << "K-th Maximum (" << k << "-th): " << arr[n - k] << endl;
    } else {
        cout << "Invalid value of k. Please enter a number between 1 and " << n << "." << endl;
    }

    return 0;
}


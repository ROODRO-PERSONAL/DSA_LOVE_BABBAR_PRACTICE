#include <iostream>
using namespace std;

void moveNegatives(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left <= right) {
        if (arr[left] < 0)
            left++;
        else if (arr[right] >= 0)
            right--;
        else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, -2, 3, -4, -5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveNegatives(arr, n);
    printArray(arr, n);

    return 0;
}


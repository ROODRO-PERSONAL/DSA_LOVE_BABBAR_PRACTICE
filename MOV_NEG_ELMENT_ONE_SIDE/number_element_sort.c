#include <stdio.h>

void moveNegatives(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left <= right) {
        if (arr[left] < 0)
            left++;
        else if (arr[right] >= 0)
            right--;
        else {
            // Swap
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1, -2, 3, -4, -5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveNegatives(arr, n);
    printArray(arr, n);

    return 0;
}


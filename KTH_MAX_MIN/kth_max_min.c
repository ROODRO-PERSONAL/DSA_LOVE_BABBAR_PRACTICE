#include <stdio.h>
#include <stdlib.h>

// Ascending order sorting function (Bubble Sort)
void sortArray(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {5, 9, 3, 1, 4, 0, 7, 8, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Original array: ");
    printArray(arr, n);

    // Ask user for value of k
    printf("Enter the value of k: ");
    scanf("%d", &k);

    sortArray(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    if (k > 0 && k <= n) {
        printf("K-th Minimum (%d-th): %d\n", k, arr[k-1]);
        printf("K-th Maximum (%d-th): %d\n", k, arr[n-k]);
    } else {
        printf("Invalid value of k. Please enter a number between 1 and %d.\n", n);
    }

    return 0;
}


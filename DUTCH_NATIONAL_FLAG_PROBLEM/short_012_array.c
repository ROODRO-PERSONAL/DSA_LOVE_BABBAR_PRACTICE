/* q > Given an array which consists of only 0, 1 and 2. Sort he array without using any sorting algo.

Its called Dutch National Flag Problem. Solving using three pointer approach. Time Complexcity is O(n) space complexcity is O(1).

step by step breakdown

initial array
arr = {2, 0, 2, 1, 1, 0};

Initial: low=0, mid=0, high=5
--------------------------------
arr[mid] = 2 → swap arr[mid], arr[high] → high--
arr[mid] = 0 → swap arr[low], arr[mid] → low++, mid++
arr[mid] = 0 → swap arr[low], arr[mid] → low++, mid++
arr[mid] = 1 → mid++
arr[mid] = 1 → mid++

*/

#include <stdio.h>

void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                // swap arr[low] and arr[mid]
                {
                    int temp = arr[low];
                    arr[low] = arr[mid];
                    arr[mid] = temp;
                    low++;
                    mid++;
                    break;
                }
            case 1:
                mid++;
                break;
            case 2:
                // swap arr[mid] and arr[high]
                {
                    int temp = arr[mid];
                    arr[mid] = arr[high];
                    arr[high] = temp;
                    high--;
                    break;
                }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {0, 1, 2, 0, 1, 2, 1, 0, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    sort012(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}


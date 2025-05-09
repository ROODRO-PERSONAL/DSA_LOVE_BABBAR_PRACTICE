#include <stdio.h>

// Function to find and print union
void findUnion(int a[], int b[], int n, int m) {
    int i = 0, j = 0;
    printf("Union: ");
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            printf("%d ", a[i]);
            i++;
        } else if (b[j] < a[i]) {
            printf("%d ", b[j]);
            j++;
        } else {
            // Same element in both
            printf("%d ", a[i]);
            i++;
            j++;
        }
    }

    // If any elements left in A
    while (i < n) {
        printf("%d ", a[i]);
        i++;
    }

    // If any elements left in B
    while (j < m) {
        printf("%d ", b[j]);
        j++;
    }
    printf("\n");
}

// Function to find and print intersection
void findIntersection(int a[], int b[], int n, int m) {
    int i = 0, j = 0;
    printf("Intersection: ");
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        } else if (b[j] < a[i]) {
            j++;
        } else {
            // Same element in both
            printf("%d ", a[i]);
            i++;
            j++;
        }
    }
    printf("\n");
}

int main() {
    int A[] = {1, 2, 3, 4, 5, 6};
    int B[] = {2, 3, 5, 7, 9};
    int n = sizeof(A)/sizeof(A[0]);
    int m = sizeof(B)/sizeof(B[0]);

    findUnion(A, B, n, m);
    findIntersection(A, B, n, m);

    return 0;
}


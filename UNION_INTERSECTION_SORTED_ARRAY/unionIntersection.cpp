#include <iostream>
using namespace std;

void findUnion(int a[], int b[], int n, int m) {
    int i = 0, j = 0;
    cout << "Union: ";
    while (i < n && j < m) {
        if (a[i] < b[j])
            cout << a[i++] << " ";
        else if (b[j] < a[i])
            cout << b[j++] << " ";
        else {
            cout << a[i] << " "; // same element
            i++; j++;
        }
    }
    while (i < n) cout << a[i++] << " ";
    while (j < m) cout << b[j++] << " ";
    cout << endl;
}

void findIntersection(int a[], int b[], int n, int m) {
    int i = 0, j = 0;
    cout << "Intersection: ";
    while (i < n && j < m) {
        if (a[i] < b[j])
            i++;
        else if (b[j] < a[i])
            j++;
        else {
            cout << a[i] << " "; // same element
            i++; j++;
        }
    }
    cout << endl;
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


#include <stdio.h>

void bubbleSort(int A[], int n);

int main() {
    int A[20], n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Array before sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    bubbleSort(A, n); // Fumction call

    printf("Array after sorting:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

void bubbleSort(int A[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (A[j] > A[j+1]) {
                A[j] += A[j+1];
                A[j+1] = A[j] - A[j+1];
                A[j] -= A[j+1];
            }
        }
    }
}

// Finding the maximum and minimum elements in an array

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int A[20];
    printf("Enter the elements: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (A[j]>A[j+1]) {
                A[j] += A[j+1];
                A[j+1] = A[j] - A[j+1];
                A[j] -= A[j+1];
            }
        }
    }
    printf("Maximum Element: %d\nMinimum Element: %d", A[n-1], A[0]);
    return 0;
}
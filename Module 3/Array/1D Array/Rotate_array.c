#include <stdio.h>
int main() {
    int A[20], n;
    printf("Enter length of the array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }
    int r = 0;
    printf("Enter Number of positions to rotate: ");
    scanf("%d", &r);
    for (int i = 0; i < r; i++) {
        int temp = A[0];
        for (int j = 0; j < n-1; j++) {
            A[j] = A[j+1];
        }
        A[n-1] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter the length of the 2 arrays: ");
    scanf("%d %d", &n1, &n2);
    int A[100], B[50];
    printf("Enter the elements of first array: ");
    for (int i=0; i<n1; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter the elements of second array: ");
    for (int i=0; i<n2; i++) {
        scanf("%d", &B[i]);
    }
    for (int i=0; i<n2; i++) {
        A[n1+i] = B[i];
    }
    printf("Merged Array: ");
    for (int i=0; i<n1+n2; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}
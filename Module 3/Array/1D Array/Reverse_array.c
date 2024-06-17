#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int A[20], B[20];
    printf("Enter the elements: ");
    for (int i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }
    for (int i=0; i<n; i++) {
        B[n-i-1] = A[i];
    }
    printf("Reversed List: ");
    for (int i=0; i<n; i++) {
        printf("%d ", B[i]);
    }
}
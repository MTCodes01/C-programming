#include <stdio.h>
int main() {
    int n, sum=0;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int A[20];
    printf("\nEnter the elements:\n");
    for (int i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }
    for (int i=0; i<n; i++) {
        sum += A[i];
    }
    float avg = sum/n;
    printf("Sum = %d\nAverage = %.2f", sum, avg);
    return 0;
}
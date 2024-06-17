#include <stdio.h>
int main() {
    int n, num, flag = 0;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int A[20];
    printf("\nEnter the elements:\n");
    for (int i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }
    printf("\nEnter a number:");
    scanf("%d", &num);
    for (int i=0; i<n; i++) {
        if (A[i] == num) {
            flag = 1;
            printf("Found the number %d at position %d.", num, i+1);
        }
    }
    if (flag == 0) {
        printf("The number %d not found in the given array!", num);
    }
}
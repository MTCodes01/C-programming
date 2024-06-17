#include <stdio.h>
int main() {
    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &row, &col);
    int A[10][10], B[10][10], SUM[10][10];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            SUM[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Sum of the matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", SUM[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int row, col;
    printf("Enter the number of rows and columns of matrices: ");
    scanf("%d%d", &row, &col);
    int A[10][10], B[10][10], DIFF[10][10];
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
            DIFF[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("Difference of the matrices:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", DIFF[i][j]);
        }
        printf("\n");
    }
    return 0;
}

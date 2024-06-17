#include <stdio.h>
int main() {
    int row, col;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d", &row, &col);
    int A[10][10], B[10][10], transpose[10][10];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = A[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}

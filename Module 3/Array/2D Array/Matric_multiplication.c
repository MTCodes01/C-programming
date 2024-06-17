#include <stdio.h>
int main() {
    int row1, col1, row2, col2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d", &row1, &col1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d", &row2, &col2);
    if (col1 != row2) {
        printf("Error! Column of first matrix is not equal to row of second matrix.\n");
        return -1;
    }
    int A[10][10], B[10][10], MUL[10][10];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initializing elements of matrix mul to 0.
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            MUL[i][j] = 0;
        }
    }

    // Multiplying matrices a and b and storing in array mul.
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                MUL[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Product of the matrices:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", MUL[i][j]);
        }
        printf("\n");
    }

    return 0;
}

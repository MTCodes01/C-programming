#include <stdio.h>

int main() {
    // Arithmetic Operators
    int a = 5, b = 3;
    int sum = a + b;        // Addition
    int difference = a - b; // Subtraction
    int product = a * b;    // Multiplication
    int quotient = a / b;   // Division
    int remainder = a % b;  // Modulus

    printf("Arithmetic Operators:\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n\n", remainder);

    // Relational Operators
    printf("Relational Operators:\n");
    if (a == b) {
        printf("a is equal to b\n");
    }
    if (a != b) {
        printf("a is not equal to b\n");
    }
    if (a > b) {
        printf("a is greater than b\n");
    }
    if (a < b) {
        printf("a is less than b\n");
    }
    if (a >= b) {
        printf("a is greater than or equal to b\n");
    }
    if (a <= b) {
        printf("a is less than or equal to b\n");
    }
    printf("\n");

    // Logical Operators
    int x = 5, y = -3;
    printf("Logical Operators:\n");
    if (x > 0 && y > 0) {
        printf("Both x and y are positive\n");
    }
    if (x > 0 || y > 0) {
        printf("At least one of x or y is positive\n");
    }
    if (!(x > 0)) {
        printf("x is not greater than 0\n");
    }
    printf("\n");

    // Assignment Operator
    int c = 10;
    printf("Assignment Operator:\n");
    printf("c = %d\n\n", c);

    // Bitwise Operators (Example with Bitwise AND)
    int num1 = 5;   // Binary: 101
    int num2 = 3;   // Binary: 011
    int bitwise_and = num1 & num2;  // Result: 001 (Decimal: 1)

    printf("Bitwise AND Operator:\n");
    printf("5 & 3 = %d\n", bitwise_and);

    return 0;
}

#include <stdio.h>
int factorial(int n);
int main() {
    int number = 5;
    int fact = factorial(number);
    
    printf("Factorial of %d is %d\n", number, fact);

    return 0;
}

int factorial(int n) {
    // Base case: factorial of 0 and 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: factorial(n) = n * factorial(n-1)
        return n * factorial(n - 1);
    }
}

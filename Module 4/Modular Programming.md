# Modular Programming in C: Example Explanation

## Overview

Modular programming in C involves dividing a program into smaller modules or functions, each performing a specific task. This approach enhances code reusability, readability, and maintainability.

## Example Code

```c
#include <stdio.h>

// Function prototypes (declarations)
int add(int a, int b);
int multiply(int a, int b);

// Main function
int main() {
    int x = 5, y = 3;
    
    // Using the add function
    int sum = add(x, y);
    printf("Sum: %d\n", sum);
    
    // Using the multiply function
    int product = multiply(x, y);
    printf("Product: %d\n", product);
    
    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}
```

## Explanation

1. Function Prototypes:

- Function prototypes (`add` and `multiply`) are declared before the `main` function. They inform the compiler about function names, return types, and parameters, allowing functions to be called before they are defined.
```c
int add(int a, int b);
int multiply(int a, int b);
```

2. Main Function:

- The `main` function is where the program execution begins.
```c
int main() {
    // Code here
    return 0;
}
```

3. Function Definitions:

- Function definitions provide the actual implementation of the functions declared earlier.
```c
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}
```
- `add` function adds two integers (`a` and `b`) and returns the result.
- `multiply` function multiplies two integers (`a` and `b`) and returns the result.

## Benefits of Modular Programming

- Code Reusability: Functions can be reused multiple times in different parts of the program or in other programs.
- Readability: Breaking down code into smaller functions makes it easier to understand and maintain.
- Encapsulation: Functions encapsulate specific functionality, promoting better code organization and reducing complexity.
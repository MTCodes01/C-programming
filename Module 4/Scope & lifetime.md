# Scope and Lifetime of Variables

In C programming, the scope and lifetime of a variable determine where and for how long the variable exists and can be accessed. Understanding these concepts is crucial for managing memory efficiently and avoiding unintended behavior in programs.

## Scope of Variables

- **Scope**: Refers to the region of the program where a variable is visible and can be accessed.

### Global Variables

- **Declared outside any function or block**: Accessible throughout the entire program.
- **Scope**: Starts at the point of declaration and continues until the end of the program.

Example:
```c
#include <stdio.h>

// Global variable
int globalVar = 100;

void func() {
    printf("Global variable inside function: %d\n", globalVar);
}

int main() {
    printf("Global variable in main function: %d\n", globalVar);
    func();
    return 0;
}
```

### Local Variables
- Declared inside a function or block: Accessible only within that function or block.
- Scope: Begins when the function or block is entered and ends when the function or block exits.
Example:
```c
#include <stdio.h>

void func() {
    // Local variable
    int localVar = 50;
    printf("Local variable inside function: %d\n", localVar);
}

int main() {
    // localVar is not accessible here
    func();
    return 0;
}
```

## Lifetime of Variables

- **Lifetime**: Refers to the duration for which a variable exists in memory during program execution.

### Static Variables

- Declared using `static` keyword: Preserves the value between function calls.
- Lifetime: Exists throughout the program's execution.
Example:
```c
#include <stdio.h>

void func() {
    // Static variable
    static int staticVar = 0;
    staticVar++;
    printf("Value of static variable: %d\n", staticVar);
}

int main() {
    func();
    func();
    return 0;
}
```

### Automatic Variables (Non-Static)

- ***Default for variables declared inside functions without storage class specifier*** (`auto`): Created when the function is called and destroyed when the function exits.
- **Lifetime**: Limited to the function's execution.
Example:
```c
#include <stdio.h>

void func() {
    // Automatic variable
    int autoVar = 10;
    printf("Value of automatic variable: %d\n", autoVar);
}

int main() {
    func();
    return 0;
}
```

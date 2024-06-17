# Formal & Actual Arguments/Parameters

## Formal Parameters (Formal Arguments)

Formal parameters are placeholders or variables listed in the function definition. They represent the values that a function expects to receive when it is called. These parameters are defined inside the parentheses of the function header.

## Actual Parameters (Actual Arguments)

Actual parameters are the real values or expressions passed to a function when it is called. These values are substituted for the formal parameters defined in the function header. They represent the data that the function operates on.

### Example
```c
// Function prototype with formal parameters
void displayMessage(char msg[], int times);

// Function definition with formal parameters
void displayMessage(char msg[], int times) {
    for (int i = 0; i < times; i++) {
        printf("%s\n", msg);
    }
}

int main() {
    char message[] = "Hello, world!";
    int count = 3;

    // Calling the function with actual arguments
    displayMessage(message, count);

    return 0;
}
```

## Main Points

- **Formal Parameters**: Defined in the function header (prototype or definition). They act as placeholders for the values to be passed.
- **Actual Parameters**: Provided during the function call. They are the real values that replace the formal parameters when the function executes.
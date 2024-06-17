## Pass by Value

```c
#include <stdio.h>

// Function prototype
void changeValue(int num);

int main() {
    int x = 10;

    printf("Before function call: x = %d\n", x);

    // Calling the function with x as argument
    changeValue(x);

    printf("After function call: x = %d\n", x);

    return 0;
}

// Function definition
void changeValue(int num) {
    num = 20; // Modifying the parameter num

    printf("Inside function: num = %d\n", num);
}
```

## Explanation

1. Main Function:

    - `int x = 10;` initializes the variable x with the value 10.
    - `printf("Before function call: x = %d\n", x);` prints the value of `x` before calling the function.
    
2. Function Call:

    - `changeValue(x);` calls the function `changeValue` and passes `x` as an argument.

3. Function Definition:

    - `void changeValue(int num)` defines the function `changeValue` that takes an integer parameter num.
    - `num = 20;` modifies the parameter `num` inside the function.

4. Output:

    - The output shows that `x` remains 10 after the function call because `changeValue` operates on a copy of `x` (i.e., `num`), not `x` itself.

## Output
```r
Before function call: x = 10
Inside function: num = 20
After function call: x = 10
```

## Main Points

- **Pass by Value**: In C, all arguments are passed by value by default. This means the function receives a copy of the argument's value, not the original variable.
- **Function Scope**: Changes made to the parameter inside the function are local to the function and do not affect the original variable passed as an argument.
- **Efficiency**: Pass by value is efficient for basic data types because it avoids the overhead of copying large amounts of data.
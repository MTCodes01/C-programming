# Break and Continue Statements in C

### Break Statement

The `break` statement in C is used to terminate the nearest enclosing loop or `switch` statement.

```c
#include <stdio.h>

int main() {
    int i;

    // Example of break statement
    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            break; // exits the loop when i equals 6
        }
        printf("Iteration: %d\n", i);
    }

    return 0;
}
```

### Continue Statement

The `continue` statement in C is used to skip the rest of the current iteration of a loop and continue to the next iteration.

```c
#include <stdio.h>

int main() {
    int i;

    // Example of continue statement
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // skips printing when i equals 3
        }
        printf("Iteration: %d\n", i);
    }

    return 0;
}
```
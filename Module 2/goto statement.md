# Goto Statement in C

The `goto` statement in C allows jumping to a labeled statement within the same function.

```c
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            goto end; // jumps to the 'end' label when i equals 3
        }
        printf("Iteration: %d\n", i);
    }
    
    end:
    printf("End of loop\n");

    return 0;
}
```
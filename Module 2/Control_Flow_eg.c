#include <stdio.h>

int main() {
    int num = 10;
    char grade = 'B';
    int i;

    // If Statement
    if (num > 0) {
        printf("If Statement: Number is positive\n");
    }

    // Else Statement
    if (num > 0) {
        printf("Else Statement: Number is positive\n");
    } else {
        printf("Else Statement: Number is not positive\n");
    }

    // If-Else-If Statement
    if (num > 0) {
        printf("If-Else-If Statement: Number is positive\n");
    } else if (num < 0) {
        printf("If-Else-If Statement: Number is negative\n");
    } else {
        printf("If-Else-If Statement: Number is zero\n");
    }

    // Switch Statement
    switch (grade) {
        case 'A':
            printf("Switch Statement: Excellent!\n");
            break;
        case 'B':
            printf("Switch Statement: Well done!\n");
            break;
        case 'C':
            printf("Switch Statement: Passed\n");
            break;
        default:
            printf("Switch Statement: Invalid grade\n");
    }

    // While Loop
    i = 1;
    while (i <= 5) {
        printf("While Loop: %d\n", i);
        i++;
    }

    // Do-While Loop
    i = 1;
    do {
        printf("Do-While Loop: %d\n", i);
        i++;
    } while (i <= 5);

    // For Loop
    for (i = 1; i <= 5; i++) {
        printf("For Loop: %d\n", i);
    }

    // Break Statement
    for (i = 1; i <= 10; i++) {
        if (i == 6) {
            break; // exits the loop when i equals 6
        }
        printf("Break Statement: %d\n", i);
    }

    // Continue Statement
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // skips printing when i equals 3
        }
        printf("Continue Statement: %d\n", i);
    }

    // Goto Statement
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            goto end; // jumps to end label when i equals 3
        }
        printf("Goto Statement: %d\n", i);
    }
    
    end:
    printf("Goto Statement: End of loop\n");

    return 0;
}

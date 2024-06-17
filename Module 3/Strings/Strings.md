# Strings in C Programming

Strings in C are sequences of characters terminated by a null character (`'\0'`). Here are some key aspects of strings in C:

## Declaration and Initialization

In C, strings are typically handled as character arrays where the last character is `'\0'`, indicating the end of the string.

```c
char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
```
Or more commonly:
```c
char greeting[] = "Hello";
```

## Important Points

1. Null Terminator: Every string in C is terminated by a null character (`'\0'`). This character is automatically added when you initialize a string using double quotes (`"`).

Character Array: Strings are represented as arrays of characters (`char[]`), allowing direct manipulation and access to individual characters.

Immutable: In C, strings are technically immutable. Once created, you cannot modify the contents of a string directly. You can overwrite characters, but you cannot change the length or dynamically resize it without creating a new string.

Standard Library Functions: C provides several standard library functions (`<string.h>`) to work with strings, such as `strlen`, `strcpy`, `strcat`, `strcmp`, etc.

## Example Usage

```c
#include <stdio.h>
#include <string.h>

int main() {
    char greeting[20] = "Hello"; // Initialized with enough space for "Hello" and '\0'

    // Printing the string using puts
    puts("Greeting:");
    puts(greeting);

    // Length of the string using strlen
    int len = strlen(greeting);
    printf("Length of greeting: %d\n", len);

    // Copying a string using strcpy
    char copy[20];
    strcpy(copy, greeting); // copy now contains "Hello"

    // Concatenating strings using strcat
    strcat(copy, " World!"); // copy now contains "Hello World!"

    // Comparing strings using strcmp
    if (strcmp(greeting, copy) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // Reading a string using gets
    char input[20];
    printf("Enter a string: ");
    gets(input); // For example: Hi there
    printf("You entered: %s\n", input);

    return 0;
}

```
## Output

```yaml
Greeting:
Hello
Length of greeting: 5
Strings are equal.
Enter a string: Hi there
You entered: Hi there
```
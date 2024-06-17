# Pointers in C

Pointers are powerful features that allow direct manipulation of memory addresses. They are fundamental for tasks like dynamic memory allocation and efficient data access.

## Declaration and Initialization

- **Declaration**: Pointers are declared using `*` before the variable name.
- **Initialization**: Pointers are initialized to point to the address of another variable using the address-of operator `&`.

### Example:

```c
#include <stdio.h>

int main() {
    int num = 10;    // Variable holding an integer value
    int *ptr;        // Pointer declaration

    ptr = &num;      // Pointer initialized to address of num

    printf("Value of num: %d\n", num);        // Output: Value of num: 10
    printf("Address of num: %p\n", &num);     // Output: Address of num: 0x7ffeeeb19a2c (Example address)
    printf("Value pointed to by ptr: %d\n", *ptr);   // Output: Value pointed to by ptr: 10

    return 0;
}
```

## Dereferencing and Pointer Arithmetic

- **Dereferencing**: Accessing the value stored at the memory address pointed to by a pointer using `*`.
- **Pointer Arithmetic**: Incrementing or decrementing a pointer to traverse through an array or manipulate memory locations.

### Example:

```c
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;   // Pointer to the first element of the array

    printf("Value at arr[0]: %d\n", *ptr);    // Output: Value at arr[0]: 10

    ptr++;   // Move pointer to the next element
    printf("Value at arr[1]: %d\n", *ptr);    // Output: Value at arr[1]: 20

    return 0;
}
```

## Null Pointers

- **Null Pointers**: Pointers that do not point to any memory location.
- Useful for indicating that a pointer is not currently pointing to a valid object.

### Example:

```c
#include <stdio.h>

int main() {
    int *ptr = NULL;

    if (ptr == NULL) {
        printf("Pointer is currently NULL.\n");
    } else {
        printf("Pointer is not NULL.\n");
    }

    return 0;
}
```

# Arrays and Pointers

Arrays and pointers are intimately connected. Arrays can be accessed via pointers, and pointers can be used to manipulate array elements efficiently.

## Declaration and Initialization

- **Array Declaration**: Arrays are declared using square brackets `[]`, specifying the size if known at compile-time.
- **Pointer Declaration**: Pointers can be used to access array elements by pointing to the array's first element.

### Example:

```c
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};   // Array declaration and initialization
    int *ptr;                           // Pointer declaration

    ptr = arr;   // Pointer initialized to the address of the first element of arr

    // Accessing array elements using pointers
    printf("Value of arr[0]: %d\n", *ptr);     // Output: Value of arr[0]: 10
    printf("Value of arr[1]: %d\n", *(ptr + 1)); // Output: Value of arr[1]: 20
    printf("Value of arr[2]: %d\n", *(ptr + 2)); // Output: Value of arr[2]: 30

    return 0;
}
```

## Pointer Arithmetic with Arrays

- **Pointer Arithmetic**: Pointers can be incremented or decremented to access successive or preceding elements of an array.
- **Array Indexing**: Arrays are accessed similarly to pointers using square brackets [].

### Example:

```c
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;   // Pointer initialized to the first element of arr

    printf("Value at arr[0]: %d\n", *ptr);    // Output: Value at arr[0]: 10
    printf("Value at arr[1]: %d\n", *(ptr + 1)); // Output: Value at arr[1]: 20
    printf("Value at arr[2]: %d\n", *(ptr + 2)); // Output: Value at arr[2]: 30

    return 0;
}
```

# Pass by Reference in C Using Pointers

Pass by reference is simulated using pointers. This allows functions to modify the original data passed to them. Here’s how it works:

## Example

```c
#include <stdio.h>

// Function to swap two integers using pass by reference
void swap(int *a, int *b) {
    int temp = *a;  // Dereference pointer to get value at address of 'a'
    *a = *b;        // Assign value at address of 'b' to address of 'a'
    *b = temp;      // Assign temp (original value of 'a') to address of 'b'
}

int main() {
    int num1 = 10, num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Passing addresses of num1 and num2 to swap function
    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
```
## Output
```mathematica
Before swapping: num1 = 10, num2 = 20
After swapping: num1 = 20, num2 = 10
```

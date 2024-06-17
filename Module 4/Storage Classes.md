# Storage Classes in C Programming

In C programming, storage classes define the scope (visibility) and lifetime of variables and functions. There are four primary storage classes: `auto`, `extern`, `static`, and `register`.

## `auto` Storage Class

- **Default Storage Class for Local Variables**: Variables declared inside a function without a storage class specifier are automatically considered `auto`.
- **Lifetime**: Exists only within the block in which it is defined.
- **Example**:
  ```c
  void func() {
      auto int num = 10;
      // 'num' is automatically 'auto' by default
  }
  ```
## `extern` Storage Class

- **Declaration of External Variables**: Used to declare a variable that is defined in another file or externally.
- **Lifetime**: Throughout the program's execution.
- **Example**:
```c
extern int count;
// Declaration of 'count' defined elsewhere
```

## `static` Storage Class

- **Preservation of Value Between Function Calls**: Maintains the value of a variable between function calls.
- **Lifetime**: Throughout the program's execution.
- **Scope**: Local to the block where it is declared.
- **Example**:
```c
void func() {
    static int num = 0;
    num++;
    printf("Value of num: %d\n", num);
}
```

## `register` Storage Class

- **Hint to Compiler for Optimization**: Suggests that a variable be stored in a CPU register for faster access.
- **Scope**: Local to the block where it is declared.
- **Example**:
```c
void func() {
    register int x = 10;
    // Suggests 'x' to be stored in a register if possible
}
```
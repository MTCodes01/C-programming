# Sequential and Random Access to Files in C

File operations in C can be broadly categorized into sequential access and random access. These methods determine how data is read from or written to a file.

## Sequential Access

Sequential access means reading or writing data to a file in a sequential manner, one byte after another. This is the most common way of accessing files.

### Reading a File Sequentially

- **fscanf**: Reads formatted input from a file.
- **fgets**: Reads a string from a file.
- **fgetc**: Reads a character from a file.

### Example:

```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    char buffer[100];

    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    // Reading using fscanf
    while (fscanf(file, "%s", buffer) != EOF) {
        printf("fscanf: %s\n", buffer);
    }

    // Reset file pointer to the beginning of the file
    rewind(file);

    // Reading using fgets
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("fgets: %s", buffer);
    }

    // Reset file pointer to the beginning of the file
    rewind(file);

    // Reading using fgetc
    int c;
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }

    fclose(file);
    return 0;
}
```

## Writing to a File Sequentially

- **fprintf**: Writes formatted output to a file.
- **fputs**: Writes a string to a file.
- **fputc**: Writes a character to a file.

Example:
```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    fprintf(file, "Writing to a file sequentially using fprintf\n");
    fputs("Writing to a file sequentially using fputs\n", file);
    fputc('A', file);

    fclose(file);
    return 0;
}
```
# Random Access

Random access allows reading from or writing to any position within a file. This is useful for accessing data in a non-sequential manner.

## Functions for Random Access

- **fseek**: Moves the file pointer to a specific location in the file.
- **ftell**: Returns the current position of the file pointer.
- **rewind**: Moves the file pointer to the beginning of the file.

Example:
```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r+");
    char buffer[20];

    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    // Move file pointer to the 10th byte from the beginning
    fseek(file, 10, SEEK_SET);
    printf("Current position: %ld\n", ftell(file));

    // Read data from the new position
    fgets(buffer, sizeof(buffer), file);
    printf("Data read from file: %s\n", buffer);

    // Move file pointer to the beginning
    rewind(file);
    printf("File pointer reset to position: %ld\n", ftell(file));

    // Write data to the beginning of the file
    fputs("Random access", file);

    fclose(file);
    return 0;
}
```
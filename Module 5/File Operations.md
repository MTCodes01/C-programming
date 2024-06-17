# File Operations in C

File operations are essential for reading from and writing to files in C. The `stdio.h` library provides functions for handling files. Here are the basics of file operations in C:

## Opening a File

- **fopen**: Used to open a file.
- **Modes**: 
| Mode  | Description                                                         |
|-------|---------------------------------------------------------------------|
| `"r"` | Read mode (default mode, file must exist)                           |
| `"w"` | Write mode (creates a new file else overwrite an existing file)        |
| `"a"` | Append mode (creates a new file if it doesn't exist, else append)      |
| `"r+"`| Read and write mode (file must exist)                               |
| `"w+"`| Read and write mode (creates a new file if it doesn't exist, else overwrite) |
| `"a+"`| Read and write mode (creates a new file if it doesn't exist, else append)    |

### Example:

```c
#include <stdio.h>

int main() {
    FILE *file;

    // Open a file in write mode
    file = fopen("example.txt", "w");

    printf("File opened successfully\n");

    fclose(file);
    return 0;
}
```
## Writing to a File

- **fprintf**: Writes formatted output to a file.
- **fputs**: Writes a string to a file.
- **fputc**: Writes a character to a file.

### Example:
```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    fprintf(file, "Writing to a file using fprintf\n");
    fputs("Writing to a file using fputs\n", file);
    fputc('A', file);

    fclose(file);
    return 0;
}
```
## Reading from a File

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
    fscanf(file, "%s", buffer);
    printf("fscanf: %s\n", buffer);

    // Reset file pointer to the beginning of the file
    rewind(file);

    // Reading using fgets
    fgets(buffer, sizeof(buffer), file);
    printf("fgets: %s", buffer);

    // Reading using fgetc
    int c = fgetc(file);
    printf("fgetc: %c\n", c);

    fclose(file);
    return 0;
}
```

## Appending to a File

- **Append Mode (`"a"`)**: Opens a file for writing at the end of the file (appending) without modifying the existing content.
- **fprintf, fputs, fputc**: Can be used for appending data.
Example:
```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "a");

    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    fprintf(file, "Appending with fprintf\n");
    fputs("Appending with fputs\n", file);
    fputc('B', file);

    fclose(file);
    return 0;
}
```

## Closing a File

- **fclose**: Closes an opened file to free up resources.

### Example:
```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");

    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    // Perform file operations

    fclose(file);  // Close the file
    return 0;
}
```

## Checking for End of File

- feof: Checks if the end of a file has been reached.

### Example:
```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "r");
    int c;

    if (file == NULL) {
        printf("Failed to open file\n");
        return 1;
    }

    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }

    if (feof(file)) {
        printf("\nEnd of file reached\n");
    } else {
        printf("\nError reading file\n");
    }

    fclose(file);
    return 0;
}
```
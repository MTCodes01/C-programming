# File Handling Functions in C

## `fseek()`

The `fseek()` function is used to move the file pointer to a specific location in the file. You can move the file pointer relative to the beginning of the file, the current position, or the end of the file by specifying the appropriate `whence` value (`SEEK_SET`, `SEEK_CUR`, or `SEEK_END`). This function is useful for random access to files.

### Example Use Cases:
- Skipping a header in a binary file.
- Moving to a specific record in a large data file.

## `ftell()`

The `ftell()` function returns the current position of the file pointer. This is useful for finding out where you are in the file, particularly after using `fseek()` or when dealing with large files where tracking the position manually is cumbersome.

### Example Use Cases:
- Checking the position after reading or writing data.
- Debugging file position issues.

## `feof()`

The `feof()` function checks if the end-of-file indicator associated with the stream is set. This helps in detecting the end of a file when reading data. It’s particularly useful in loops that read data until the end of the file is reached.

### Example Use Cases:
- Reading until the end of a file.
- Looping through file contents safely.

## `fread()`

The `fread()` function reads data from the given stream into the specified array. This function is typically used for reading binary data from files. It reads a specified number of elements, each of a specified size, and stores them in memory.

### Example Use Cases:
- Reading structured binary data, such as records or structs.
- Loading a file into a buffer for processing.

## `fwrite()`

The `fwrite()` function writes data from the specified array to the given stream. This function is used for writing binary data to files. It writes a specified number of elements, each of a specified size, from memory to the file.

### Example Use Cases:
- Saving structured data to a binary file.
- Writing a buffer to a file for storage or transmission.

## `rewind()`

The `rewind()` function sets the file position indicator to the beginning of the file. It also clears the error and EOF indicators for the stream. This function is useful when you need to read or write from the start of the file again after performing some file operations.

### Example Use Cases:
- Resetting the file pointer to reprocess a file.
- Clearing error indicators to retry file operations.

#include <stdio.h>

int linearSearch(int arr[], int n, int key);

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 22;

    int result = linearSearch(arr, n, key); // Fumction call

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return index of the element if found
        }
    }
    return -1;  // Return -1 if element is not found
}

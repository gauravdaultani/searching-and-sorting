#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    // Base case: If the key is not found or the array is empty
    if (n == 0)
        return -1;

    // If the key is found at the current index
    if (arr[n - 1] == key)
        return n - 1;

    // Recursive case: Search in the remaining array
    return linearSearch(arr, n - 1, key);
}

int main() {
    int arr[] = {5, 2, 8, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    int index = linearSearch(arr, n, key);

    if (index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");

    return 0;
}

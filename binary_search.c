#include <stdio.h>

// Function to perform binary search on a sorted array
int binarySearch(int arr[], int size, int value) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; // To avoid potential overflow
        // Check if value is present at mid
        if (arr[mid] == value) {
            return mid; // Return the index of the value
        }
        
        // If value is greater, ignore left half
        if (arr[mid] < value) {
            low = mid + 1;
        }
        // If value is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 50}; // Example array (must be sorted)
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    int x = 10; // Value to search for
    int result = binarySearch(arr, n, x);
    if(result == -1) {
        printf("Element is not present in array");
    } else {
        printf("Element is present at index %d", result);
    }
    return 0;
}
#include <stdio.h>

// Function to perform binary search on a sorted array
// const arr = [1,10,23,55,72]
// const needle = 14
int binarySearch(int arr[], int size, int needle) { 
    int low = 0;
    int high = size - 1;

    while(low < high) {
        int mid_point = (low + high) / 2;
        if(arr[mid_point] == needle) {
            return mid_point;
        }
        if(arr[mid_point] > needle) {
            high = mid_point - 1;
        } else {
            low = mid_point + 1;
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 50}; // Example array (must be sorted)
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    printf("Size of array: %d\n", n);
    int needle = 10; // Value to search for
    int result = binarySearch(arr, n, needle);
    if(result == -1) {
        printf("Element is not present in array");
    } else {
        printf("Element is present at index %d", result);
    }
    return 0;
}
#include <iostream>
using namespace std;

// Function to perform binary search (non-recursive)
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    // Loop while the search space is valid
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate the middle index

        // Check if key is at mid
        if (arr[mid] == key) {
            return mid; // Key found, return index
        }
        // If key is smaller than mid, search in the left half
        else if (arr[mid] > key) {
            high = mid - 1;
        }
        // If key is greater than mid, search in the right half
        else {
            low = mid + 1;
        }
    }

    return -1; // Key not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    int key = 40; // Element to search for

    int result = binarySearch(arr, size, key); // Perform binary search

    if (result != -1) {
        cout << "Element " << key << " found at index " << result << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

// Function for linear search (non-recursive)
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Key found, return the index
        }
    }
    return -1; // Key not found, return -1
}

int main() {
    int arr[] = {12, 34, 23, 56, 78, 90};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of the array
    int key = 56; // Element to search for

    int result = linearSearch(arr, size, key); // Perform linear search

    if (result != -1) {
        cout << "Element " << key << " found at index " << result << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}

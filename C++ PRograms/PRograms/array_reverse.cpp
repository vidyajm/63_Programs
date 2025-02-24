#include <iostream>
using namespace std;

// Function to reverse the array
void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    // Swap elements from the start and end until we reach the middle
    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the start and end indices towards the middle
        start++;
        end--;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare the array
    int arr[n];

    // Input the elements of the array
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse the array
    reverseArray(arr, n);

    // Output the reversed array
    cout << "Reversed array: ";
    printArray(arr, n);

    return 0;
}


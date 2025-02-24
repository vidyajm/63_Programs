#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

// Function to find the second largest distinct element in the array
int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return -1; // If there are less than 2 elements, no second largest exists
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Traverse the array to find the largest and second largest distinct elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;  // Update second largest to the previous largest
            largest = arr[i];         // Update largest to the current element
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];   // Update second largest if the element is distinct
        }
    }

    // If second largest is still INT_MIN, it means all elements are the same
    if (secondLargest == INT_MIN) {
        return -1;
    }

    return secondLargest;
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

    // Find the second largest distinct element
    int result = findSecondLargest(arr, n);

    // Output the result
    if (result == -1) {
        cout << "No second largest distinct element exists." << endl;
    } else {
        cout << "The second largest distinct element is: " << result << endl;
    }

    return 0;
}


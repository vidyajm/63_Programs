#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int size, int key)
{
    if (size == 0) {
        return -1;
    }
    else if (arr[size - 1] == key) {

        // Return the index of found key.
        return size - 1;
    }
    return linearsearch(arr, size - 1, key);
}

// Driver Code
int main()
{
    int arr[] = { 5, 15, 6, 9, 4 };
    int key = 4;

    // Function call
    int ans = linearsearch(arr, 5, key);
    if (ans == -1) {
        cout << "The element " << key << " is not found."
             << endl;
    }
    else {
        cout << "The element " << key << " is found at "
             << ans << " index of the given array." << endl;
    }
    return 0;
}

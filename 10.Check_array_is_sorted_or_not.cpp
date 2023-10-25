#include <iostream>
#include <vector>

using namespace std;

int isSorted(int n, vector<int> a) {
    // Iterate through the array to check if it is sorted in non-decreasing order
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            return 0; // Return 0 if the array is not sorted
        }
    }
    return 1; // Return 1 if the array is sorted
}

int main() {
    // Example usage of the isSorted function
    vector<int> arr = {1, 2, 3, 4, 5}; // Sorted array
    int n = arr.size();

    if (isSorted(n, arr)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    vector<int> arr2 = {3, 1, 4, 2, 5}; // Unsorted array
    int n2 = arr2.size();

    if (isSorted(n2, arr2)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}

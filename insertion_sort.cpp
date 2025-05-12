#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr, int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int size;
    cout << "Enter array size: ";
    if (!(cin >> size) || size <= 0) {
        cout << "Invalid size. Please enter a positive integer." << endl;
        return 1;
    }

    vector<int> arr(size);
    cout << "Enter " << size << " array elements: ";
    for (int i = 0; i < size; i++) {
        if (!(cin >> arr[i])) {
            cout << "Invalid input. Please enter integers." << endl;
            return 1;
        }
    }

    insertionSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Description:
// Insertion Sort builds the sorted array one element at a time.
// Time Complexity: O(n^2)
// Space Complexity: O(1) auxiliary
// Simple and efficient for small or nearly-sorted arrays.

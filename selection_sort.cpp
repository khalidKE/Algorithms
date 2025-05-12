#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for(int j = i+1; j < size; j++)
            if(arr[j] < arr[minIdx]) minIdx = j;
        swap(arr[i], arr[minIdx]);
    }
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) cin >> arr[i];

    selectionSort(arr, size);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

// Description:
// Selection Sort selects the minimum element and places it in order.
// Time Complexity: O(n^2)
// Easy to implement but not efficient for large datasets.

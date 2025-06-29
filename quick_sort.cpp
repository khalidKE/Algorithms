#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low - 1;
    for(int j = low; j < high; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) cin >> arr[i];

    quickSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

// Description:
// Quick Sort uses a pivot to divide and sort the array recursively.
// Time Complexity: Avg O(n log n), Worst O(n^2)
// Very fast in practice but not stable.

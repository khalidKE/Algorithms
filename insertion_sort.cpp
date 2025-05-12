#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for(int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int arr[] = {9, 5, 1, 4, 3};
    int size = 5;
    insertionSort(arr, size);
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

// Description:
// Insertion Sort builds the sorted array one element at a time.
// Time Complexity: O(n^2)
// Simple and efficient for small or nearly-sorted arrays.

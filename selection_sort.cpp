#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int minIdx = i;
        for(int j = i+1; j < size; j++) {
            if(arr[j] < arr[minIdx]) minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

int main() {
    int arr[] = {29, 10, 14, 37, 14};
    int size = 5;
    selectionSort(arr, size);
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

// Description:
// Selection Sort selects the minimum element and places it in order.
// Time Complexity: O(n^2)
// Easy to implement but not efficient for large datasets.

#include <iostream>
using namespace std;

void countingSort(int arr[], int size) {
    int max = *max_element(arr, arr + size);
    int count[max+1] = {0};

    for(int i = 0; i < size; i++) count[arr[i]]++;
    for(int i = 0, j = 0; i <= max; i++) {
        while(count[i]--) arr[j++] = i;
    }
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int size = 7;
    countingSort(arr, size);
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

// Description:
// Counting Sort counts occurrences and rebuilds the sorted array.
// Time Complexity: O(n + k), where k is the max value.
// Fast for small ranges, but not for negative values or large ranges.

#include <iostream>
using namespace std;

int getMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++)
        if(arr[i] > max) max = arr[i];
    return max;
}

void countingSort(int arr[], int size, int exp) {
    int output[size], count[10] = {0};

    for(int i = 0; i < size; i++) count[(arr[i]/exp)%10]++;
    for(int i = 1; i < 10; i++) count[i] += count[i-1];
    for(int i = size - 1; i >= 0; i--) {
        output[count[(arr[i]/exp)%10] - 1] = arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(int i = 0; i < size; i++) arr[i] = output[i];
}

void radixSort(int arr[], int size) {
    int m = getMax(arr, size);
    for(int exp = 1; m/exp > 0; exp *= 10)
        countingSort(arr, size, exp);
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter non-negative array elements: ";
    for(int i = 0; i < size; i++) cin >> arr[i];

    radixSort(arr, size);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

// Description:
// Radix Sort sorts numbers by digit place (ones, tens, hundreds, ...).
// Time Complexity: O(nk), where k is the number of digits in the max number.
// Efficient for large sets of integers.

#include <iostream>
#include <algorithm>
using namespace std;

void countingSort(int arr[], int size) {
    if (size == 0) return;

    int max = *max_element(arr, arr + size);
    if (max < 0) {
        cout << "Error: Counting sort does not support negative values." << endl;
        return;
    }

    int* count = new int[max + 1]();
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    int j = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[j++] = i;
            count[i]--;
        }
    }
    delete[] count;
}

int main() {
    int size;
    cout << "Enter array size: ";
    if (!(cin >> size) || size <= 0) {
        cout << "Invalid size. Please enter a positive integer." << endl;
        return 1;
    }

    int* arr = new int[size];
    cout << "Enter " << size << " non-negative array elements: ";
    for (int i = 0; i < size; i++) {
        if (!(cin >> arr[i]) || arr[i] < 0) {
            cout << "Invalid input. Please enter non-negative integers." << endl;
            delete[] arr;
            return 1;
        }
    }

    countingSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}

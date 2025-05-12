#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];
    for(int i = 0; i < n1; i++) L[i] = arr[l+i];
    for(int j = 0; j < n2; j++) R[j] = arr[m+1+j];

    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while(i < n1) arr[k++] = L[i++];
    while(j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r) {
    if(l < r) {
        int m = l + (r - l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) cin >> arr[i];

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

// Description:
// Merge Sort uses divide-and-conquer to recursively sort and merge.
// Time Complexity: O(n log n)
// Stable and efficient for large datasets but uses extra memory.

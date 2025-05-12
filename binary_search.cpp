#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while(left <= right) {
        int mid = (left + right)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int size, target;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter sorted array elements: ";
    for(int i = 0; i < size; i++) cin >> arr[i];

    cout << "Enter target to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);
    if(result != -1)
        cout << "Found at index: " << result << endl;
    else
        cout << "Not found\n";
}

// Description:
// Binary Search splits the search range in half each step.
// Time Complexity: O(log n)
// Only works on sorted arrays.

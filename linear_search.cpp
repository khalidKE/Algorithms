#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int size, target;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++) cin >> arr[i];

    cout << "Enter target to search: ";
    cin >> target;

    int result = linearSearch(arr, size, target);
    if(result != -1)
        cout << "Found at index: " << result << endl;
    else
        cout << "Not found\n";
}

// Description:
// Linear Search checks each element until it finds the target.
// Time Complexity: O(n)
// Useful for unsorted arrays.

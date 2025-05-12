#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int target = 9;
    int result = linearSearch(arr, 5, target);
    if(result != -1)
        cout << "Found at index: " << result << endl;
    else
        cout << "Not found\n";
}

// Description:
// Linear Search checks each element until it finds the target.
// Time Complexity: O(n)
// Useful for unsorted arrays.

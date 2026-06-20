#include<iostream>
using namespace std;

void insertion(int arr[], int n) {
    for (int i = 1; i < n; i++) {  // Start from the second element
        int minIndex = i;  // Initialize minIndex to the current element

        for (int j = i + 1; j < n; j++) {  // Find the minimum element in the unsorted part
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the element at position i
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int arr[5] = {3, 5, 1, 2, 8};  // Declare and initialize the array

    insertion(arr, 5);  // Sort the array using insertion sort

    // Print the sorted array
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

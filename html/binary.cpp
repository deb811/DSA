
#include<iostream>
using namespace std;

int search(int num[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while (start <= end) {
        if (num[mid] == key) {
            return mid;  // Key found, return the index
        }

        if (key > num[mid]) {
            start = mid + 1;  // Move the start pointer to the right
        } else {
            end = mid - 1;  // Move the end pointer to the left
        }

        mid =  start + (end-start)/2;  // Recalculate the mid index
    }

    return -1;  // Key not found
}

int main() {
    int arr[3] = {6, 9, 4}; // Example array
    int arrindex = search(arr, 3, 6); // Searching for key 6 in the array

    if (arrindex != -1) {
        cout << "Index is " << arrindex << endl; // Output the index if found
    } else {
        cout << "Element not found" << endl; // If element is not found
    }

    return 0;
}

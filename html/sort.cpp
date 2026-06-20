#include<iostream>
using namespace std;

void bubble(int arr[], int n){
    for(int i = 0; i < n - 1; i++) {  // Sort n-1 times at most

        for(int j = 0; j < n - i - 1; j++) {  // Compare adjacent elements

            if (arr[j] > arr[j + 1]) {  // Swap if the current element is larger

                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[7] = {52,5654,853,6346,64744,5345,5654646,};  // Declare and initialize the array

    bubble(arr, 7);  // Sort the array using the bubble sort algorithm

    // Print the sorted array
    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

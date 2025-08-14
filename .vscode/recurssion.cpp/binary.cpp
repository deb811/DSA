#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {
    for (int i = s; i <= e; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarysrch(int *arr, int s, int e, int k) {
    print(arr, s, e);

    // Base case
    if (s > e)
        return false;

    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
        return true;

    // Recursive case
    if (arr[mid] < k) {
        return binarysrch(arr, mid + 1, e, k);
    } else {
        return binarysrch(arr, s, mid - 1, k);
    }
}

int main() {
    int arr[5] = {3, 5, 7, 9, 11};
    int key = 13;

    bool ans = binarysrch(arr, 0, 4, key);  // index 0 to 4

    if (ans == 1) {
        cout << "present";
    } else {
        cout << "not present";
    }

    return 0;
}

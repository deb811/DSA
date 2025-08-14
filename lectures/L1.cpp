
#include<iostream>
using namespace std;

int pivot(int num[], int n) {
    int s = 0;
    int e = n - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        if (num[mid] >= num[0]) {
            // Pivot is in the right half
            s = mid + 1;
        }
        else {
            // Pivot is in the left half
            e = mid;
        }
    }
    return s;
}

int main() {
    int num[5] = {6, 7, 1, 2, 3};
    cout << "Pivot index: " << pivot(num, 5);
    return 0;
}

#include <iostream>
using namespace std;

int binary(int arr[], int n) {
    int st = 0, end = n - 1;
    while (st <= end) {
        int mid = st + (end - st) / 2;

        // Check if the middle element is the unique element
        if ((mid == 0 || arr[mid - 1] != arr[mid]) && (mid == n - 1 || arr[mid] != arr[mid + 1])) {
            return mid; // Unique element found
        }

        // Check if mid is even or odd
        if (mid % 2 == 0) { // Even index
            if (arr[mid] == arr[mid + 1]) {
                st = mid + 1; // Move right
            } else {
                end = mid - 1; // Move left
            }
        } else { // Odd index
            if (arr[mid] == arr[mid - 1]) {
                st = mid + 1; // Move right
            } else {
                end = mid - 1; // Move left
            }
        }
    }

    return -1; // No unique element found
}

int main() {
    int arr[] = {0, 0,1, 3, 3, 5, 5,9, 9};
    int n = 9;

    cout << binary(arr, n);

    return 0;
}

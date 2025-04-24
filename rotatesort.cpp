#include <iostream>
using namespace std;

int binary(int arr[], int n, int tar) {
    int st = 0, end = n - 1;
    while (st <= end) {
        int mid = (st + end) / 2;

        // Check if the middle element is the target
        if (arr[mid] == tar) {
            return mid;
        }

        // Check if the left half is sorted
        if (arr[st] <= arr[mid]) {
            // Target is in the left half
            if (arr[st] <= tar && tar < arr[mid]) {
                end = mid - 1;
            } else { // Otherwise, move to the right half
                st = mid + 1;
            }
        } else { // Right half is sorted
            // Target is in the right half
            if (arr[mid] < tar && tar <= arr[end]) {
                st = mid + 1;
            } else { // Otherwise, move to the left half
                end = mid - 1;
            }
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {3, 4, 5, 6, 7, 0, 1, 2};
    int n = 8;
    int tar = 1;

    cout << binary(arr, n, tar);

    return 0;
}

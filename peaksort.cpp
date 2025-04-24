#include <iostream>
using namespace std;

int binary(int arr[], int n)
{
    int st = 0, end = n - 1;
    while (st <= end) 
    {
        int mid = st + (end-st) / 2;

        // Check if the middle element is the target
        if (arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) {
            return mid;
        }

        // Check if the left half is sorted
        if (arr[mid-1] <arr[mid]) {
            
           
                st = mid + 1;
            }
         else { 
                end = mid - 1;
            }
        
    }
    return -1; 
}

int main() {
    int arr[] = {0,3,8,9,5,2};
    int n =6;
   

    cout << binary(arr, n);

    return 0;
}

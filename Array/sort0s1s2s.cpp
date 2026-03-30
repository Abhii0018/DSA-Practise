#include<iostream>
using namespace std;

/**
 * Optimized sorting of 0s, 1s, and 2s using the Dutch National Flag algorithm.
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int arr[] = {2, 1, 0, 2, 1, 0, 0, 1, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    sort012(arr, len);

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
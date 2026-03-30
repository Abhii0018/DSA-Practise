// Subarray with given sum using Sliding Window (O(n))
#include<iostream>
using namespace std;

/**
 * Finds the subarray with a given sum using a sliding window.
 * Assumes all elements are non-negative.
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */
void subArraySum(int arr[], int n, int target) {
    int currentSum = 0;
    int start = 0;

    for (int end = 0; end < n; end++) {
        currentSum += arr[end];

        // Shrink the window if currentSum exceeds target
        while (currentSum > target && start < end) {
            currentSum -= arr[start];
            start++;
        }

        if (currentSum == target) {
            cout << "Subarray found between indices " << start << " and " << end << endl;
            cout << "Elements: ";
            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            return;
        }
    }
    cout << "No subarray with the given sum was found." << endl;
}

int main() {
    int arr[] = {10, 2, 3, 8, 3, 2, 4, 6};
    int target = 13;
    int len = sizeof(arr) / sizeof(arr[0]);

    subArraySum(arr, len, target);

    return 0;
}
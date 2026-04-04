// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

// Explanation:
// 2 appears 4 times, which is more than ⌊7/2⌋ = 3


#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate = 0, count = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }

        if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    cout << "Majority Element: " << majorityElement(nums);
    return 0;
}
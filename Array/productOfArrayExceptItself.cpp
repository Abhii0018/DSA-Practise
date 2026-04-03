// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

// Explanation:
// answer[0] = 2×3×4 = 24  
// answer[1] = 1×3×4 = 12  
// answer[2] = 1×2×4 = 8  
// answer[3] = 1×2×3 = 6  

#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> answer(n, 1);

    // Step 1: Prefix product
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Step 2: Suffix product
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    return answer;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
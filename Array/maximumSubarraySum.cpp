// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6

// Explanation:
// The subarray [4, -1, 2, 1] has the largest sum = 6



// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;

// int maxSubArray(vector<int>& nums) {
//     int maxSum = INT_MIN;
//     int currentSum = 0;

//     for (int i = 0; i < nums.size(); i++) {
//         currentSum += nums[i];

//         if (currentSum > maxSum) {
//             maxSum = currentSum;
//         }

//         if (currentSum < 0) {
//             currentSum = 0;
//         }
//     }

//     return maxSum;
// }

// int main() {
//     vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
//     cout << "Maximum Subarray Sum: " << maxSubArray(nums);
//     return 0;
// }






//calculate the maxSumArray using kadabe algorithm..

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int maxSum(vector<int>& nums){
//     int maxVal=INT_MIN;
//     int current_sum=0;
//     for(int i=0; i<nums.size(); i++){
//         current_sum+=nums[i];

//         if(current_sum>maxVal){
//             maxVal=current_sum;
//         }

//         if(current_sum<0){
//             current_sum=0;
//         }
//     }

//     return maxVal;

// }
// int main(){
    
// vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
// cout<<maxSum(nums);
//     return 0;
// }


#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxSum(vector<int>& nums){
    int maxVal=INT_MIN;
    int current_sum=0;
    for(int i=0; i<nums.size(); i++){
        current_sum+=nums[i];

        if(current_sum>maxVal){
            maxVal=current_sum;
        }

        if(current_sum<0){
            current_sum=0;
        }
    }

    return maxVal;

}
int main(){
    
vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
cout<<maxSum(nums);
    return 0;
}
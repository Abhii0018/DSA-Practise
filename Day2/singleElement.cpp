#include<iostream>
using namespace std;
int main(){
//     Input :nums = [1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6]

// Output:4

// Explanation: Only the number 4 appears once in the array.

// Example 2

// Input : nums = [1, 1, 3, 5, 5]

// Output:3


int nums[]={1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
int len=sizeof(nums)/sizeof(nums[0]);
int ans=0;
for(int i=0; i<len; i++){
    ans^=nums[i];

}
cout<<ans;
    return 0;
}
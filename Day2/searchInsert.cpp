// Input: nums = [1, 3, 5, 6], target = 5

// Output: 2

// Explanation: The target value 5 is found at index 2 in the sorted array. Hence, the function returns 2.

// Example 2

// Input: nums = [1, 3, 5, 6], target = 2

// Output: 1 

#include<iostream>
using namespace std;
int main(){
    int nums[]={1, 3, 5, 6};
    int len=4;
    int target=4;
    for(int i=0; i<len; i++){
        if(nums[i]==target){
            cout<< i;
            break;
        }
        else{
            if(nums[i]>=target){
                  cout<<i;
                  break;
            }
            
          
        }
    }
    return 0;
}
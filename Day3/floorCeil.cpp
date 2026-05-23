// Input : nums =[3, 4, 4, 7, 8, 10], x= 5

// Output: 4 7

// Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.

// Example 2

// Input : nums =[3, 4, 4, 7, 8, 10], x= 8

// Output: 8 8

// Explanation: The floor of 8 in the array is 8, and the ceiling of 8 in the array is also 8.

#include<iostream>
using namespace std;
int main(){
    int nums[]={3, 4, 4, 7, 8, 10};
    int len=sizeof(nums)/sizeof(nums[0]);
    int x=8;
    int floor=-1;
    int ceil=-1;

    for(int i=0; i<len; i++){

        if(nums[i]==x){
            floor=nums[i];
            ceil=nums[i];
        }

        if(nums[i]<x){
            floor=nums[i];
        }
        else{
            ceil=nums[i];
            break;
        }
    }
    cout<<floor<<" "<<ceil;

    return 0;
}
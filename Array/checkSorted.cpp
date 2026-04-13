// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].
// Example 2:

// Input: nums = [2,1,3,4]
// Output: false
// Explanation: There is no sorted array once rotated that can make nums.

#include<iostream>
using namespace std;
int main(){

    int arr[]={3,4,5,1,2};
    // int arr[]={1,6,3,4,5};
    int n=5;
    int count =0;



    for(int i=0; i<n; i++){
        if(arr[i]>(arr[i+1]%n)){
           count++;
        }
    }
    if(count<=1){
        cout<<"Array is sorted";
    }else{
        cout<<"Not sorted";
    }



    return 0;
}
// Input : arr = [1, 2, 3, 4, 5, 6, 7, 8, 5, 1]

// Output: 7

// Explanation: In this example, there is only 1 peak that is at index 7.

// Example 2

// Input : arr = [1, 2, 1, 3, 5, 6, 4]

// Output: 1

#include<iostream>
using namespace std;
int main(){
    int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 5, 1};
    int len=10;
    int ans=-1;
    for(int i=1; i<len-1; i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}
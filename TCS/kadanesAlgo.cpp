// Question 1 (Basic Kadane)

// Find the maximum subarray sum.

// arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4}

// Expected Output:

// 6

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]= {-2, 1, -3, 5, -1, 2, 1, -5, 4};
    int len=9;

    int curSum=arr[0];
    int maxi=arr[0];

    for(int i=1; i<len; i++){
        curSum=max(arr[i], curSum+arr[i]);
        maxi=max(maxi,curSum);
    }
    cout<<maxi;
    return 0;
}
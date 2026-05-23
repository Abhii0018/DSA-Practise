// Input: nums = [5, 7, 7, 8, 8, 10], target = 8

// Output: [3, 4]

// Explanation:The target is 8, and it appears in the array at indices 3 and 4, so the output is [3,4]

// Example 2

// Input: nums = [5, 7, 7, 8, 8, 10], target = 6

// Output: [-1, -1]

#include<iostream>
#include<vector>
using namespace std;

vector<int> FirstLastOccurence(vector<int>& arr, int target){
    
    int len=arr.size();
    int first=-1;
    int last=-1;
    for(int i=0; i<len; i++){
        if(arr[i]==target){
            if(first==-1){
                first=i;
            }
            last=i;
        }
      
    }
    return {first,last};
    

}

int main(){
vector<int> arr={5, 7, 7, 8, 8, 7,10};
int target=8;



vector<int> ans=FirstLastOccurence(arr,7);
cout<<"first Occurence is "<<ans[0]<<endl;

cout<<"last occurence is "<<ans[1]<<endl;




    return 0;

}
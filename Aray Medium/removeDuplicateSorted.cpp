#include<iostream>
using namespace std;
int main(){
    int nums[] = {1,1,2};
    int len=sizeof(nums)/sizeof(nums[0]);

    int count=1;
    for(int i=0; i<len-1; i++){
        if(nums[i]!=nums[i+1]){
            count++;
        }
    }
    cout<<count;

    return 0;
}
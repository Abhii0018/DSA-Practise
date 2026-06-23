#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int len=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=len-1;

    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    
    }
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {10, 15, 5, 20, 8};
    int len=5;

    int maxVal=INT_MIN;
    int secondMax=INT_MIN;
for(int i=0; i<len; i++){
    if(arr[i]>maxVal){
        secondMax=maxVal;
        maxVal=arr[i];
    }else if(arr[i]>secondMax && arr[i]!=maxVal){
        secondMax=arr[i];
    }
}
    cout<<secondMax;
    return 0;
}
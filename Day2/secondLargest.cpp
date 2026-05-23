#include<iostream>
using namespace std;
int main(){
    int arr[]={6,9,8,3,5};
    int len=5;
    int maxi=INT_MIN;
    int secMaxi=INT_MIN;

    for(int i=0;i<len; i++){
        if(arr[i]>maxi){
            secMaxi=maxi;
            maxi=arr[i];
        }
        else if(secMaxi!=maxi && secMaxi<arr[i]){
            secMaxi=arr[i];
        }
    }
    cout<<secMaxi;
    return 0;
}
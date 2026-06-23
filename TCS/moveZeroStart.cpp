#include<iostream>
using namespace std;
int main(){
    int arr[]= {9,4,0,2,0,5,1};
    int len=7;
    int j=len-1;
    for(int i=len-1; i>=0; i--){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j--;
        }
    }
    while(j>=0){
            arr[j]=0;
            j--;
        }

    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
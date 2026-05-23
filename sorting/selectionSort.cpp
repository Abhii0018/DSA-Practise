#include<iostream>
using namespace std;
int main(){
    int arr[]={4,3,5,2,1,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0; i<len-1; i++){
        int smlIdx=i;
        for(int j=i+1; j<len; j++){
            if(arr[j]<arr[smlIdx]){
                smlIdx=j;
            }
        }

        swap(arr[i],arr[smlIdx]);
    }

    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
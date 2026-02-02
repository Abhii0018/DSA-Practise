#include<iostream>
#include<algorithm> // for use the sort function
using namespace std;
int main(){
    int arr[]={2,1,0,2,1,0,0,1,2};
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; i++){
        sort(arr,arr+len);   //it takes first element and it goes to next to end element
    }

    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
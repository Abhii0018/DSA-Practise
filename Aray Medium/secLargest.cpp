// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={3,8,31,9,22,12,32};
//     int len=sizeof(arr)/sizeof(arr[0]);

//     int max=INT_MIN;
//     int secMax=INT_MIN;

//     for(int i=0; i<len; i++){
//         if(arr[i]>max){
//             secMax=max;
//             max=arr[i];

//         }else if(secMax!=max && secMax<arr[i]){
//             secMax=arr[i];
//         }
//     }

//     cout<<"Second largets element is: "<<secMax<<" ";

//     return 0;
// }













#include<iostream>
using namespace std;
int main(){

    int arr[]={4,6,1,9,3,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN;
    int secMaxi=INT_MIN;

    for(int i=0; i<len; i++){
        if(arr[i]>maxi){
            
            secMaxi=maxi;
            maxi=arr[i];
        }

        else if(arr[i]>secMaxi && arr[i]!=maxi){
            secMaxi=arr[i];
        }
    }
    cout<<secMaxi;
    return 0;
}
















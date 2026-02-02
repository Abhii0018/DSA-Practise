//Move all negatives number at begining and move all postive number at last

//Method 1:--- Brute Force

// #include<iostream>
// using namespace std;
// int main(){

//     int arr1[]={1,-2,-4,3,7,-3,-21,9,-2};
//     // output:-
//     // arr1[]={-2,-4,-3,-21,-2,1,3,7,9};

//     int len=sizeof(arr1)/sizeof(arr1[0]);
//     int arr2[len];
//     int index=0;

//     for(int i=0; i<len; i++){
//         if(arr1[i]<0){
//             arr2[index++]=arr1[i];
//         }
//     }

//     for(int i=0; i<len; i++){
//         if(arr1[i]>0){
//             arr2[index++]=arr1[i];
//         }
//     }

//     for(int i=0; i<len; i++){
//         cout<<arr2[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }

// Mehod 2:- Optomized way.....


#include<iostream>
using namespace std;
int main(){
    int arr[]={1,-2,-4,3,1,7,-3,-21,9,-2};
    int len=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=0; i<len; i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);  // it just exchanging the element from its index
            j++;
        }
    }

    

    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
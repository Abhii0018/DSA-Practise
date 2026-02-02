// #include<iostream>
// // #include<algorithm>
// // #include<vector>
// using namespace std;
// int main(){
//     int arr1[]={1,2,5,9};
//     int arr2[]={3,4,5,6,9};

//     int len1=sizeof(arr1)/sizeof(arr1[0]);
//     int len2=sizeof(arr2)/sizeof(arr2[0]);
//     int len=len1+len2;
//     int arr3[len];
    
//   int i=0,j=0,k=0;

//   while(i<len1 && j<len2){
//     if(arr1[i]<arr2[j]){
//         arr3[k++]=arr1[i++];
//     }else{
//         arr3[k++]=arr2[j++];
//     }
// }

// if(i<len1){
//         arr3[k++]=arr1[i++];
//     }

//     if(j<len2){
//         arr3[k++]=arr2[j++];
//     }
  
//     for(int x=0; x<len; x++){
//         cout<<arr3[x]<<" ";
//     }
//     cout<<endl;
// }




#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,4,6,7,20};
    int arr2[]={0,2,3,8,9,11};

    int len1=sizeof(arr1)/sizeof(arr1[0]);
    int len2=sizeof(arr2)/sizeof(arr2[0]);
    int len3=len1+len2;

    int arr3[len3];

    // lets do brute force

    int index=0;
    int i=0,j=0;
    while(i<len1 && j<len2){
        if(arr1[i]<arr2[j]){
            arr3[index++]=arr1[i++];
        }else{
            arr3[index++]=arr2[j++];
        }
    }
    if(i<len1){
        arr3[index++]=arr1[i++];
    }

    if(j<len2){
        arr3[index++]=arr2[j++];
    }

    for(int x=0; x<len3; x++){
        cout<<arr3[x]<<" ";
    }
    cout<<endl;



    return 0;
}












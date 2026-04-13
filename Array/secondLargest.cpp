// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] = {10, 15, 5, 20, 8};
//     int len=5;

//     int maxVal=INT_MIN;
//     int secondMax=INT_MIN;
// for(int i=0; i<len; i++){
//     if(arr[i]>maxVal){
//         secondMax=maxVal;
//         maxVal=arr[i];
//     }else if(arr[i]>secondMax && arr[i]!=maxVal){
//         secondMax=arr[i];
//     }
// }
//     cout<<secondMax;
//     return 0;
// }




//  [1, 2, 4, 7, 7, 5]  
// Output:
  
// Second Smallest : 2  
// Second Largest : 5  


// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){

//     int arr[]={1, 2, 4, 7, 7, 5};
//     int len=sizeof(arr)/sizeof(arr[0]);

//     int minVal=INT_MAX;

//     int maxVal=INT_MIN;

//     int secMax=INT_MIN;

//     for(int i=0; i<len; i++){
//         if(arr[i]>maxVal){
//             secMax=maxVal;
//             maxVal=arr[i];
//         }else if(arr[i]>secMax && arr[i]!=maxVal){
//             secMax=arr[i];
//         }
//     }
//     cout<<secMax;

//     return 0;
// }

























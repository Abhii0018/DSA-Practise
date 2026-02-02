// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={7,6,5,4,3,2,1};
//    int len=sizeof(arr)/sizeof(arr[0]);
//    for(int i=len-1; i>=0; i--){
//     cout<<arr[i]<<" ";
//    }
//    cout<<endl;
    
// }

// // Method 2 swap just number

#include<iostream>
using namespace std;
int main(){
    int arr[]={8,7,6,5,4,3,2,1};
   int len=sizeof(arr)/sizeof(arr[0]);
   int mid=len/2;
   int temp;
   for(int i=0; i<len/2; i++){
        // temp=arr[i];
        // arr[i]=arr[len-i-1];
        // arr[len-i-1]=temp;
        swap(arr[i],arr[len-i-1]);
   }
     for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

}
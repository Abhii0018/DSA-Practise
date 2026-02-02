
//sort the array in 0s 1s 2s

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,1,0,2,1,0,0,1,2};
//     int len=sizeof(arr)/sizeof(arr[0]);

//     int count[3]={0,0,0};
//     for(int i=0; i<len; i++){
//       count[arr[i]]++;         // here we are counting the frequency of each element 
//     }

//     int index=0;
//     for(int i=0; i<3; i++){
//         while(count[i]--){
//             arr[index++]=i;
//         }
//     }

//     // print result

//     for(int i=0; i<len; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    

//     return 0;
// }



// count the frequency of element in th aray

#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,0,1,0,0,1,2};
    int len=sizeof(arr)/sizeof(arr[0]);

    int count[3]={0,0,0};
    for(int i=len-1; i>=0; --i){
        count[arr[i]]++;
    }

        cout<<"Frequency of 0: "<<count[0]<<endl;
         cout<<"Frequency of 1: "<<count[1]<<endl;
         cout<<"Frequency of 2: "<<count[2]<<endl;
    int index=0;

    for(int i=0; i<3; i++){
        while(count[i]--){
            arr[index++]=i;
        }
    }

    //now printing the sorted array

    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

 
    return 0;
}
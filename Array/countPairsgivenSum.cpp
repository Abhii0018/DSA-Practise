// Count pairs of given sum:-

// Method 1:-- Brute force for solving this time complexity is O(N)^2;

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,1,1,1};
//     int sum=2;
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int count=0;
//     for(int i=0; i<len; i++){
//         for(int j=i+1; j<len; j++){
//             if(arr[i]+arr[j]==sum){
//                 count++;
//             }
//         }
//     }
//     cout<<"Total numbers of pairs is: "<<count<<endl;
//     return 0;
// }

//optimize way using frequency map......

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[]={1,1,1,1};
    int sum=2;
    int len=sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> freq;

    int count=0;
    for(int i=0; i<len; i++){
        int need=sum-arr[i];

        if(freq.find(need)!=freq.end()){
            count+=freq[need];
        }

        freq[arr[i]]++;
    }
    cout<<"Total number of pairs: "<<count<<endl;

    

    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int num[]={3,4,9,2};
//     int target=6;
//     int len=sizeof(num)/sizeof(num[0]);


//     for(int i=0; i<len; i++){
//         for(int j=i+1; j<len; j++){
//             if((num[i]+num[j])==target){
//                 cout<<i<<" "<<j;
//             }
//         }
//     }
    
//     return 0;
// }

// using map function  time complexity ->  o(n)

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     int num[]={3,4,9,2};
//     int target=12;
//     int n=sizeof(num)/sizeof(num[0]);

//     map<int, int> mp;
//     for(int i=0; i<n; i++){
//         int remaining=target-num[i];

//         if(mp.find(remaining)!=mp.end()){
//             cout<<mp[remaining]<<" "<<i;
//             return 0;
//         }

//         mp[num[i]]=i;
//     }

//     return 0;
// }


#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[] = {2, 7, 11, 15};
    int target =9;

// Output: [0, 1]
int size=sizeof(arr)/sizeof(arr[0]);

map<int, int> mp;
for(int i=0; i<size; i++){
    int remain=target-arr[i];

    if(mp.find(remain)!=mp.end()){
        cout<<mp[remain]<<" "<<i;
        return 0;
    }
    //store current element with index
    

}



    return 0;
}
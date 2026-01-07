// Input [1,2,3] -> [1,2,4]
//     [4,3,2,1] -> [4,3,2,2]


// #include<iostream>
// using namespace std;
// int main(){

//     int arr[]={1,2,3};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int digit=0;
//     while(len!=0){
       
//     }
    
//     return 0;
// }


//using map........

#include<iostream>
#include<map>
using namespace std;
int main(){
    int nums[]={1,2,3};// output={1,2,4}
    int n=3;

    map<int, int> mp;
    for(int i=0; i<n; i++){
        if(mp[nums[i]]>9){
            nums[i]=mp[nums[i]]++;
        }
        
       

    }
    return 0;
}

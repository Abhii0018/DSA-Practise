#include<iostream>
#include<cctype>
#include <unordered_map>
using namespace std;
int main(){
    int arr[]={10,3,10,3,3,10,1};
    int len=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int, int> freq;
    for(int i=0; i<len; i++){
        freq[arr[i]]++;
    }

    for(auto x:freq){
        // cout<< x.first <<" -> "<< x.second<<endl;
        
    }
    return 0;
}
#include<iostream>
#include<map>
using namespace std;

int main(){

    int arr[]={1,2,2,3,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    map<int, int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;    // it means it will check for if key is present again it will increase its count by 1
    }

    for(auto it : mp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }


    return 0;
}
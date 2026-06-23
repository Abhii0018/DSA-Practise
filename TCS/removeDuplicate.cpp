#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int arr[]={7,3,9,2,9,0,3};
    int len=7;

    unordered_set<int> s;
    for(int i=0; i<len; i++){
        s.insert(arr[i]);
    }

    for(int x: s){
        cout<<x<<" ";
    }


    return 0;
}
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int arr[]={9,4,2,4,23,84,1};
    int len=7;
    int target=13;

    unordered_set<int> s;

    for(int i=0; i<len; i++){
        s.insert(arr[i]);
    }

    
    if(s.find(target)!=s.end()){
            cout<<target<<" Found";
    }else{
            cout<<target<<" Not Found";
    }
    
    return 0;
}
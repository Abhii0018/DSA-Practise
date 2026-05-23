#include<iostream>
using namespace std;
int main(){
    int n=1024;
    int count=0;


    while(n!=0){
        // int digit=n%10;
        count=count+1;
        n=n/10;
        
        int count=log10(n)+1;
    }
    cout<<count;

    return 0;
}
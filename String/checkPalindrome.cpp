#include<iostream>
using namespace std;
int main(){
    string str="12321";
    int n=str.length();
    string newStr=str;
    for(int i=0; i<n/2; i++){
        swap(str[i],str[n-i-1]);
    }

    if(newStr==(str)){
        cout<<"true";
    }else{
        cout<<"false";
    }

    return 0;
}
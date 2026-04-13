#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> str={"a","a","b","b","c","c","c"};
    int len=str.size();
    int count=0;
    int index=0;
    for(int i=0; i<len; i++){
        count++;
        if(str[i]!=str[i+1]){
            str[index++]= to_string(count);
            
            count=0;
        }
    }
    for(int i = 0; i < len; i++) {
    cout << str[i] << " ";
}
    return 0;
}


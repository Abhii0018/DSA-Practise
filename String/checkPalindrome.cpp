// #include<iostream>
// using namespace std;
// int main(){
//     string str="12321";
//     int n=str.length();
//     string newStr=str;
//     for(int i=0; i<n/2; i++){
//         swap(str[i],str[n-i-1]);
//     }

//     if(newStr==(str)){
//         cout<<"true";
//     }else{
//         cout<<"false";
//     }

//     return 0;
// }





















#include<iostream>
using namespace std;
int main(){
    string word="Madam";
    int len=word.length();

    //convert whoile string to lowercase
    for(int i=0; i<len; i++){
        if(word[i]>='A' && word[i]<='Z'){
            word[i]=word[i]+32;
        }
    }

    for(int i=0; i<len/2; i++){
        if(word[i]!=word[len-i-1]){
            cout<<"false";
            return 0;
        }
    }
    cout<<"true";
    return 0;
}
// for anagram in both string :- character and frequency should be same in both string and obviously length also be same

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string s1="listen";
    string s2="silent";

    if(s1.length()!=s2.length()){
        cout<<"Not an anagram";
        return 0;
    }

    unordered_map<char, int> freq;
    for(char ch: s1){
        freq[ch]++;
    }

    for(char ch: s2){
        freq[ch]--;
        if(freq[ch]<0){
            cout<<"Not an anagram";
            return 0;
        }
        
    }

    //final verification

    for(auto it: freq){
        if(it.second!=0){
            cout<<"Not an anagram";
            return 0;
        }
    }
    cout<<" Sucessfully Anagram";

}
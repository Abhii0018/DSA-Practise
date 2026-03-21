// First Non-Repeating Character in a String

// Input:  "leetcode"
// Output: 'l'



#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    string s1="loveleetcode";

    unordered_set<int> count;
    for(char ch:s1){
        count.insert(ch);
    }

    // for(){

    // }

    return 0;
}

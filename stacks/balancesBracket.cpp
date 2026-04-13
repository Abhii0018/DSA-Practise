// #include<iostream>
// #include<stack>
// using namespace std;

// bool isBalance(string s){
//     int size=s.length();
//     if(size%2!=0) return false;

//     stack<char> st;
//     for(int i=0; i<size; i++){
//         if(s[i]=='('){
//             st.push(s[i]);
//         }else{ //s[i]==')'
//             if(st.size()==0)return false;
//             if(s[i]==')' && st.top()!='(') return false;
//             st.pop();
//         }
//     }
//     return st.size()==0;



// }
// int main(){
//     string s="()()()";
//     cout<<isBalance(s);
  
    
// return 0;
// }





#include<iostream>
#include<stack>
using namespace std;

bool isBalance(string s){
    int len=s.length();
    if(len%2!=0) return false;

    stack<char> st;
    for(int i=0; i<len; i++){
        if(s[0]==')') return false;
    
        if(s[i]=='('){
            st.push('(');
        }else if(s[i]==')' && st.top()=='('){
            st.pop();
        }
    }
    return st.empty();


}
int main(){
    string s=")()()()";
    cout<<isBalance(s);
    return 0;
}


































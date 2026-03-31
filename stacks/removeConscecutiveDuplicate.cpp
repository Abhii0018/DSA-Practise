#include<iostream>
#include<stack>
using namespace std;

string removeConsDuplicate(string s){
    stack<char> st;
        st.push(s[0]);
    for(char ch: s){
        

        if(ch!=st.top()){
            st.push(ch);
        }
    }
    s="";
    while(st.size()>0){
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
       string s="aaabbcddaabffg";
    //    cout<<s<<endl;
       string ans=removeConsDuplicate(s);
       cout<<ans<<" "<<endl;
       

    return 0; 
}
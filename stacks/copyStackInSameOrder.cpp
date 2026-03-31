#include<iostream>
#include<stack>
using namespace std;


int main(){

    stack<int> st;

    st.push(12);
    st.push(3);
    st.push(13);
    st.push(23);
    st.push(33);
    st.push(43);

    stack<int> temp;
    stack<int> gt;

    while(st.size()>0){
        temp.push(st.top());
        st.pop();


    }

    while(temp.size()>0){
        cout<<temp.top()<<" ";
        gt.push(temp.top());
        temp.pop();
    }
    // cout<<gt.top()<<" ";


    return 0;
}
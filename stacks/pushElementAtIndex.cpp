#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> &st){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    //now print original order

    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}

void pushAtIndex(stack<int> &st,int idx,int val){
    stack<int> helper;
    while(st.size()>idx){
        helper.push(st.top());
        st.pop();
    }

    //now push the new element in bottom
    st.push(val);
    while(helper.size()>0){
        st.push(helper.top());
        helper.pop();
    }
}
int main(){

    stack<int> st;

    st.push(12);
    st.push(3);
    st.push(13);
    st.push(23);
    st.push(33);
    st.push(43);
    pushAtIndex(st,2,90);
    print(st);


    return 0;
}
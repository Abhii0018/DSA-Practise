//reverse the stack and make sure u can get back those element also

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

    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;

    

return 0;
}
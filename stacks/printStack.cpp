// #include<iostream>
// using namespace std;
// int main(){
//     stack<int> st;
//     st.push(2);
//     st.push(3);
//     st.push(13);
//     st.push(23);
//     st.push(33);
//     st.push(43);
//     st.push(53);
//     // int size=st.size();

//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         st.pop();                               //here is one drawback elements are deleting we will not able to get those elements again.
//     }
//     cout<<endl;
    
//     return 0;
// }

//how to get back elements in stack after printing/poping

//we will extra stack
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
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl;

    cout<<st.size()<<endl;
    cout<<temp.size()<<endl;

    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<endl;

    cout<<st.size()<<endl;
    cout<<temp.size();




    return 0;
}

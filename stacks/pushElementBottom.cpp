// #include<iostream>
// #include<stack>
// using namespace std;

// void print(stack<int> &st){
//     stack<int> temp;
//     while(st.size()>0){
//         temp.push(st.top());
//         st.pop();
//     }

//     //now print original order

//     while(temp.size()>0){
//         cout<<temp.top()<<" ";
//         st.push(temp.top());
//         temp.pop();
//     }
// }

// void pushAtBottom(stack<int> &st,int val){
//     stack<int> helper;
//     while(st.size()>0){
//         helper.push(st.top());
//         st.pop();
//     }

//     //now push the new element in bottom
//     st.push(val);
//     while(helper.size()>0){
//         st.push(helper.top());
//         helper.pop();
//     }
// }
// int main(){

//     stack<int> st;

//     st.push(12);
//     st.push(3);
//     st.push(13);
//     st.push(23);
//     st.push(33);
//     st.push(43);
//     pushAtBottom(st,50);
//     print(st);


//     return 0;
// }

//push at bottom using recursive way

#include<iostream>
#include<stack>
using namespace std;

void print(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    print(st);
    cout<<x<<" "<<endl;
    st.push(x);

}

void pushAtBottom(stack<int>& st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    };
    int x=st.top();
    st.pop();
    pushAtBottom(st,val);
    // cout<<x<<" "<<endl;
    st.push(x);


}
int main(){

    stack<int> st;

    st.push(12);
    st.push(3);
    st.push(13);
    st.push(23);
    st.push(33);
    st.push(43);
    pushAtBottom(st,50);
    cout<<endl;
    print(st);



    return 0;
}
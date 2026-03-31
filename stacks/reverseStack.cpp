//reverse the stack and make sure u can get back those element also

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> st;

//     st.push(12);
//     st.push(3);
//     st.push(13);
//     st.push(23);
//     st.push(33);
//     st.push(43);

//     stack<int> temp;

//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         temp.push(st.top());
//         st.pop();
//     }
//     cout<<endl;
//     //now print in original order

//     while(temp.size()>0){
//         cout<<temp.top()<<" ";
//         st.push(temp.top());
//         temp.pop();
//     }
//     cout<<endl;

    

// return 0;
// }


//reverse the stack recursively........................

// #include<iostream>
// #include<stack>
// using namespace std;

// void print(stack<int>& st){
//      stack<int> temp;

//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         temp.push(st.top());
//         st.pop();
//     }
//     cout<<endl;
    //now print in original order

    // while(temp.size()>0){
    //     cout<<temp.top()<<" ";
    //     st.push(temp.top());
    //     temp.pop();
    // }

// }

// void reverseRecursively(stack<int>& st){//. it is displayin the reverse stack
//     if(st.size()==0) return;
//     int x=st.top();
//     cout<<x<<" "<<endl;
//     st.pop();
//     reverseRecursively(st);
//     st.push(x);


// }

// int main(){
//     stack<int> st;

//     st.push(12);
//     st.push(3);
//     st.push(13);
//     st.push(23);
//     st.push(33);
//     st.push(43);

//     reverseRecursively(st);

// return 0;
// }



//reverse the whole stack by psuhing back reverse to same stack

#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& st){
    if(st.size()==0) return;

    int x=st.top();
    st.pop();
    display(st);
    cout<<x<<" "<<endl;
    st.push(x);

}
void pushAtBottom(stack<int>& st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }

    int x=st.top();
    st.pop();
    pushAtBottom(st,val);
    st.push(x);
}
void reverse(stack<int>& st){
    if(st.size()==1)return;

    int x=st.top();
    st.pop();
    reverse(st);
    pushAtBottom(st,x);

    

}
int main(){
    stack<int> st;

    st.push(12);
    st.push(3);
    st.push(13);
    st.push(23);
    st.push(33);
    st.push(43);
    reverse(st);
    // pushAtBottom(st,99);
    display(st);

    return 0;
}

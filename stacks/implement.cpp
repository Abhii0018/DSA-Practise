#include<iostream>
using namespace std;

class Stack{
public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

void push(int val){
    if(top==size-1){
        cout<<"Stack is Full!!"<<endl;
        return;
    }

    top++;
    arr[top]=val;

}

int pop(){
    if(top==-1){
        cout<<"Stack is empty!!"<<endl;
        return -1;
    }

 return arr[top--];


}

int peek(){
    if(top==-1){
        cout<<"Stack is empty!!"<<endl;
        return -1;
    }
    return arr[top];

}

bool isEmpty(){
    return top==-1;

}

};

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.peek()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.peek()<<endl;

    return 0;
}
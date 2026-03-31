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
                cout<<"Stack is Full";
                return;
            }

            top++;
            arr[top]=val;

        }

        void pop(){
            if(top==-1){
                cout<<"stack is empty";
                return;
            }

            top--;

        }

        int peek(){
            if(top==-1){
                cout<<"No any element in stack";
                return -1;
            }

            return arr[top];
        }

        int stackLength(){
            if(top==-1){ 
                return 0;
            }
           
            return top+1;
        }

        void display(){
            if(top==-1){
                cout<<"Stack is Empty"<<endl;
                return;
            }
            for(int i=0; i<top+1; i++){
                cout<<arr[i]<<" "<<endl;
            
            }
        }

    };

    int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    // cout<<st.peek()<<endl;
    st.pop();
    // cout<<st.peek()<<endl;
    st.push(4);
    st.push(5);
    st.push(6);
    // cout<<st.stackLength()<<endl;
    // cout<<st.peek();
    st.display();
    return 0;
}
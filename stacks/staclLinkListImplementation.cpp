#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;

    Node(int val){
        this->val=val;
        this->next=nullptr;
    }

};

class Stack{
public:
   Node* head;
    int size;

    Stack(int s){
        head=NULL;
        size=0; 

    }

    void push(int val){
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        size++; 
    }

    void pop(){
        if(head == NULL){
        cout << "Stack is empty\n";
        return;
    }
        head=head->next;
        size--;
    }

    int peek(){
        if(head == NULL){
        cout << "Stack is empty\n";
        return -1;
    }
        return head->val;
    }

    int stackLength(){
        return size;
    }

    void display(){
        if(head == NULL){
        cout << "Stack is empty\n";
        return;
       }

       

};


int main(){
    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    st.push(4);
    st.push(5);
    // cout<<st.peek();
    cout<<st.stackLength();

    return 0;
}
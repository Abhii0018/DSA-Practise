#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};


void deleteAtHead(Node* &Head){
    if(Head==nullptr){
        return;
    }else if(Head->next==nullptr){
        delete Head;
        Head=nullptr;
    }else{
        Node* temp=Head;
        Head=Head->next;
        delete temp;
    }
}

void deleteAtTail(Node* &Head){
    if(Head==nullptr){
        return;
    }else if(Head->next==nullptr){
        delete Head;
        Head=nullptr;
    }else{
        Node* temp=Head;
        while(temp->next->next){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
    }
}

void display(Node* Head){
    Node* temp=Head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);       
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;      
    d->next=nullptr;
    display(a);
    cout<<"After Deletion at head "<<endl;
    deleteAtHead(a);
    display(a);

    return 0;
}

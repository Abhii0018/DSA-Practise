#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

void printReverse(Node *Head){
    Node* temp=Head;
    if(temp==nullptr)return;
    printReverse(temp->next);
    cout<<temp->data<<endl;
}
int main(){

    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    printReverse(a);
   
    return 0;
}
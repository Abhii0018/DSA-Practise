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
void display(Node *Head){
    Node* temp=Head;
    if(temp==nullptr) return;
    cout<<temp->data<<endl;
    display(temp->next);

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

    return 0;
}
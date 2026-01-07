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

    void addAtEnd(Node* head,int val){
        if(head==nullptr){
            head=new Node(val);
            return;
        }

        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=new Node(val);
        return;
    }

    void display(Node* head){
        if(head==nullptr){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

int main(){

    Node* head=nullptr;
    head->addAtEnd(head,10);
    head->addAtEnd(head,20);


    head->display(head);





    return 0;
}
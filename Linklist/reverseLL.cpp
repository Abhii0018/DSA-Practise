#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

//rever and linked list

void reverse(Node* &head){
    Node *prev=NULL;
    Node *curr=head;
    Node *nextptr;

    while(curr!=NULL){
        nextptr=curr->next;
        curr=curr->next;

    }

}


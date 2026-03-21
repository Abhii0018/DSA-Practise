// Given the head of a singly linked list and an integer X, insert a node with value X at the head of the linked list and return the head of the modified list.

// Example 1

// Input: linkedList = [1, 2, 3], X = 7

// Output: [7, 1, 2, 3]

// Explanation:

// 7 was added as the 1st node.

// Example 2

// Input: linkedList = [], X = 7

// Output: [7]

// Explanation:

// 7 was added as the 1st node.


/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/


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

void traverse(Node * head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL";

}

void insertEnd(Node* &head, int val){
    Node *temp=head;
    Node *newNode=new Node(val);
    // if(head==NULL){
    //     head->data=val;
    // }

    while(temp->next!=NULL){
       
        temp=temp->next;
    }
    temp->next=newNode;

}

void insertHead(Node *&head, int val){
   
    Node *newNode=new Node(val);
    Node *temp=head;

    if(head==NULL){
        head=newNode;
    }
    // while(temp!=NULL){
        newNode->next=head;
        head=newNode;
        // temp=temp->next;
    // }

}



int main(){
    Node *node1=new Node(2);
    Node *node2=new Node(3);
    Node *node3=new Node(4);
    node1->next=node2;
    node2->next=node3;

    // traverse(node1);
    // insertEnd(node1,5);
    // insertHead(node1,1);
    traverse(node1);




}
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

class LinkedList{
public:
    Node* Head;
    Node* tail;
    int size;

    LinkedList(){
        Head=tail=nullptr;
        size=0;
    }


    void insertAtEnd(int val){
        Node* temp=new Node(val);
        if(size==0){
            Head=tail=temp;
            size++;
        }else{
            tail->next=temp;
            tail=temp;
            size++;
        }
    }

    void insertAtFirst(int val){
        Node* temp=new Node(val);
        if(size==0){
            Head=tail=temp;
            size++;
            return;
        }else{
            temp->next=Head;
            Head=temp;
            size++;
            return;
        }
    }


    void insertAtPos(int pos,int val){
        if(pos<0 || pos>size){
            cout<<"Invalid Position"<<endl;
            return;
        }

        if(pos==0){
            insertAtFirst(val);
            return;
        }
        if(pos==size){
            insertAtEnd(val);
            return;
        }
        Node* t=new Node(val);;
        Node*temp=Head;
        for(int i=1; i<=pos-1; i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        size++;

    }



    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }else{
            Head=Head->next;
            size--;
            return;
        }
    }

    void deleteAtEnd(){
        if(size==0){
            cout<<"List is empty"<<endl;
            return;
        }
        Node*temp=Head;
        for(int i=1; i<size-1; i++){
            temp=temp->next;
        }
        temp->next=nullptr;
        size--;
        return;
        
    }

    void deleteAtPos(int pos){
        if(pos<0 || pos>=size){
            cout<<"Invalid Position"<<endl;
            return; 
        }
        if(pos==0){
            deleteAtHead();
            return; 
        }
        if(pos==size-1){
            deleteAtEnd();
            return;
        }
        Node* temp=Head;
        for(int i=1; i<=pos-1; i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
        return;
    }
    void deleteElem(Node* &Head,Node* target){
        if(Head==nullptr){
            cout<<"Linklist is empty"<<endl;
            return;
        }
        Node* temp=Head;
        while(temp->next!=target ) {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
        return;
    }
    

    void display(){
        Node* temp=Head;
        while(temp!=nullptr){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
}
};

int main(){
    LinkedList ll;
    ll.insertAtEnd(5);
    ll.insertAtEnd(15);
    ll.insertAtEnd(45);
    ll.insertAtEnd(135);
    ll.display();
    cout<<"Size of linked llist is: "<<endl;
    cout<<ll.size<<endl;
    // ll.insertAtFirst(2);
    // cout<<"After inserting at first"<<endl;
    // ll.display();
    // cout<<"Size of linked llist is: "<<endl;
    // cout<<ll.size<<endl;
    // ll.insertAtEnd(150);
    // cout<<"After inserting at end"<<endl;
    // ll.display();
    // cout<<"Size of linked llist is: "<<endl;
    // cout<<ll.size<<endl;
    ll.insertAtPos(1,999);
    cout<<"After inserting at position 3"<<endl;
    ll.display();
    // cout<<"Size of linked llist is: "<<endl;
    // cout<<ll.size<<endl;
    // ll.deleteAtHead();
    // cout<<"After deleting at head"<<endl;
    // ll.display();
    // cout<<"Size of linked llist is: "<<endl;
    // cout<<ll.size<<endl;
    // ll.deleteAtEnd();
    // cout<<"After deleting at end"<<endl;        
    // ll.display();
    // cout<<"Size of linked llist is: "<<endl;            
    // cout<<ll.size<<endl;
    cout<<"---------------------------"<<endl;;
     ll.deleteAtPos(2);
     ll.display();
     cout<<"Size of linked llist is: "<<endl;       
    cout<<ll.size<<endl;
    ll.deleteElem(ll.Head,ll.Head->next);
    
    return 0;
}
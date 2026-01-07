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



// void displayCorrect(Node* Head){
//     Node* temp=Head;
//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
        
//     }
// }


void displayReverse(Node* Head){
    Node* temp=Head;
    while(temp->next!=nullptr){
          temp=temp->next;
          cout<<temp->data<<" ";
    }
}

int sizeOflinklist(Node* Head){
    if(Head==nullptr){
        return -1;
    }
    
}

int main(){

    Node* n1=new Node(5);
    Node* n2=new Node(15);
    Node* n3=new Node(25);
    Node* n4=new Node(35);
    Node* n5=new Node(45);
    Node* n6=new Node(55);

    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    n5->next=n6;
    n6->next=nullptr;

    // displayCorrect(n1);
    cout<<"After reversing the linklist: "<<endl;

    displayReverse(n1);



    return 0;
}
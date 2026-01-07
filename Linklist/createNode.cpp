// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node * next;
//     Node(int val){
//         this->data=val;
//         this->next=NULL;
//     }
// };


// void printLinklist(Node * head){
//     Node *temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" "<<endl;
//         temp=temp->next;
//     }
// }

// int main(){
//     Node * n1=new Node(1);
//     Node * n2=new Node(2);
//     Node * n3=new Node(3);
//     Node * n4=new Node(4);

//     n1->next=n2;
//     n2->next=n3;
//     n3->next=n4;
    
    
//     Node *head=n1; 
//     printLinklist(head);
   

//     return 0;
// }








// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
// };

// void printElem(Node * Head){
//     Node *temp=Head;
//     while(temp!=NULL){
//         cout<<temp->data<<endl;
//         temp=temp->next;
//     }
// }

// int size(Node* Head){
//     Node* temp=Head;
//     int count=0;


//     while(temp!=NULL){
//         count++;
//         temp=temp->next;
//     }
//     return  count;
// }

// void displayRecursively(Node* Head){
//     Node *temp=Head;
//     if(temp==nullptr) return;

//     cout<<temp->data<<endl;

//     display(temp->next);

// }
// int main(){
//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);
//     Node* e=new Node(50);
   

//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=e;

//     // Node *Head=&a;
//     int length=size(a);
//     cout<<length<<endl;

//     // printElem(a);

//     displayRecursively(a);

//     // cout<<(a.next->next)->data<<endl;
// }













////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// create node..............................................................................










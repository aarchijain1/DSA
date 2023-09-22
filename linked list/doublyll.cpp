#include<iostream>
using namespace std;

class node{
 public :
 int data;
 node*prev;
 node* next;

//  constructor
node( int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;
}

// destructor
~node(){
        int value = this->data;
        // memory free
        if(next !=NULL){
            delete next;
            next= NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertathead(node* & head,node* & tail, int d){

    // EMPTY LIST
    if(head==NULL){
        node* temp= new node(d);
        head=temp;
        tail=temp;
    }
    else{
    node* temp= new node(d);
    temp->next=head;
    head->prev= temp;
    head=temp;
    } 
}

void insertattail(node* & head,node* & tail, int d){

    if(tail==NULL){
        node* temp= new node(d);
        tail=temp;
        head=temp;
    }
    else{
    node* temp= new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}

void insertatpos(node* &tail, node* &head, int position , int d){
    // for going to nth postition we need to traverse till n-1 th position
// 5 add , 7 add(node name=temp) , [inserting here](node name= nodetoinsert) , 9 add


// inserting at starting position
if(position ==1){
    insertathead(head,tail,d);
    return;
}
node* temp=head;
int count=1;
while (count<position-1){
    temp = temp->next;
    count++;
}

// inserting at last position
if(temp->next == NULL){
    insertattail(head,tail,d);
    return;
}  
// creating a node for d
node* nodetoinsert = new node(d);
nodetoinsert->next = temp->next;
temp->next-> prev = nodetoinsert;
temp->next = nodetoinsert;
nodetoinsert->prev=temp;
}

// ------------------deletion-------------------
void deletenode(int position , node* &head){
    // deleting first or stating node
    node* temp = head;
    if (position ==1){
        temp->next->prev = NULL;
        head= temp->next; 
        // memory free of start node
        temp->next=NULL;
        delete temp;
    }
        // deleting any middle node or last node
    else{
        node*current = head;
        node* prev= NULL;
        int count=1;
        while(count< position){
            prev= current; 
            current = current->next;
            count++;
        }
        current ->prev = NULL;
        prev->next= current->next;
        current->next=NULL;
        delete current;
    }
}

// traversing a linked list
void print(node* &head){
     node* temp= head;
     while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp ->next;
     }
     cout<<endl;
}

// finding out the length of the linked list
int getlength(node *head){
    int len=0;
node* temp= head;
     while(temp != NULL){
        len++;
        temp = temp ->next;
     }
     return len;
}



int main(){
    node *node1= new node(10);
    node *head = NULL;
    node *tail = NULL;
    print(head);

    // cout<<getlength(head);

    insertathead(head,tail, 11);
    print(head);
    insertathead(head,tail, 13);
    print(head);
    insertathead(head,tail, 8);
    print(head);

    insertattail(head,tail,25);
    print(head);

    insertatpos(tail , head , 2 , 100);
    print(head);
    insertatpos(tail , head , 1 , 101);
    print(head);
    insertatpos(tail , head , 7 , 102);
    print(head);

    deletenode(1,head);
    print(head);
    
    return 0;
}
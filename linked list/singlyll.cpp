#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

// constructor implementation
    node(int data){
        this->data=data;
        this->next= NULL;
    }

    // destructor
    ~node(){
        int value = this->data;
        // memeory free
        if(this->next !=NULL){
            delete next;
            this->next= NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertathead(node* &head , int d){

    // new node create
    node*  temp= new node(d);
    temp ->next = head;
    head = temp;
}


void insertattail(node* &tail, int d){
    // new node create
    node*  temp= new node(d);
    tail->next=temp;
    tail=temp;
}

void insertatpos(node* &tail, node* &head, int position , int d){
    // for going to nth postition we need to traverse till n-1 th position
// 5 add , 7 add(node name=temp) , [inserting here](node name= nodetoinsert) , 9 add


// inserting at starting position
if(position ==1){
    insertathead(head,d);
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
    insertattail(tail,d);
    return;
}
// creating a node for d
node* nodetoinsert = new node(d);
nodetoinsert->next = temp->next;
temp->next = nodetoinsert;
}

// printing linked list or hpw to traverse a linked list
void print(node* &head){
     node* temp= head;
     while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp ->next;
     }
     cout<<endl;
}

// ------------------deletion-------------------
void deletenode(int position , node* &head){
    // deleting first or stating node
    node* temp = head;
    if (position ==1){
        head= head->next;
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
        prev->next= current->next;
        current->next=NULL;
        delete current;
    }


}

int main(){
    // created a new node
    node* node1= new node(10);
    // cout<< node1 ->data<<endl;
    // cout<< node1->next<<endl;
    
    // head pointed to new node
    node* head= node1;
    node* tail= node1;

    print(head);

    // insertathead(head,12);
    // print(head);
    // insertathead(head,15);
    // print(head);

    insertattail(tail,12);
    print(head);
    insertattail(tail,15);
    print(head);

    insertatpos(tail,head , 2,18);
    print(head);
    insertatpos(tail,head , 1,1);
    print(head);
    insertatpos(tail,head , 4,18);
    print(head);

cout<<"head "<< head->data<<endl;
cout<<"tail "<< tail->data<<endl;

deletenode(1,head);
print(head);
    return 0;
}
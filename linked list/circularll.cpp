#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // constructor
    node(int d){
        this->data=d;
        this->next=NULL;
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

void insertnode(node* &tail, int element, int d){

    // /empty list
    if(tail == NULL){
        node * newnode = new node(d);
        tail = newnode;
        newnode ->next = newnode;
    }
    else{
        // non empty list
    // assuming that the element is present in the list
       node * current = tail;
       while(current->data != element){
        current=current->next;
       } 

    //    element found -> current is representing element wala node
    node * temp = new node(d);
    temp->next= current->next;
    current->next =temp;
    }
}

void print(node* &tail){
    node* temp=tail;
    do {
       cout<< tail->data<<" ";
        tail= tail->next;
    }
    while(tail!=temp);
    cout <<endl;
}

void deleteNode(node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        node* prev = tail;
        node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

int main(){
    node * tail = NULL;
    // empty list mai insert kar rahe hai
    insertnode(tail , 5,3);
    print(tail);
    insertnode(tail , 3,5);
    print(tail);
    insertnode(tail , 5,7);
    print(tail);
    insertnode(tail , 7,9);
    print(tail);
    insertnode(tail , 5,6);
    print(tail);
    insertnode(tail , 9,10);
    print(tail);

    deleteNode(tail, 5);
    print(tail);
    return 0;
}
#include<iostream>
#include<queue>
using namespace std;

int main(){
  deque<int> d;

    d.push_front(12);
    d.push_back(14);

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();
    
    cout << d.front() << endl;
    cout << d.back() << endl;
    d.pop_back();

    if(d.empty()) {
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue is not empty " << endl;
    }


    queue<int>q;
    q.push(1);
    cout<<q.front()<<endl;
    q.push(2);
    cout<<q.front()<<endl;

    q.push(3);
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;


     cout<<"size:"<<q.size()<<endl;
     q.pop();
     cout<<"size:"<<q.size()<<endl;
if(q.empty()){
    cout<<"queue empty";
}
else{
    cout<<"not empty";
}
    return 0;
}
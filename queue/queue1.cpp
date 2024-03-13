#include<iostream>
#include<queue>
using namespace std;

int main(){
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
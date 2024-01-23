#include <iostream>
#include <stack>
using namespace std;

// implementation of stack without using STL
class stack1
{
    // properties
public:
    int *arr;
    int top;
    int size;
    // behaviour
    stack1(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

int main()
{

    stack1 st(5);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    st.push(5);
    st.push(6);

    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;

    //     // creation of stack
    //     stack<int>s;

    //     // push operations
    //     s.push(2);
    //     s.push(3);

    // // pop operations
    // s.pop();
    // cout<<"stack top element "<< s.top()<<endl;
    // if(s.empty()){
    //     cout<<"stack is empty"<<endl;
    // }
    // else{
    //     cout<<"stack is not empty"<<endl;
    // }
    // cout<<"size of stack is "<< s.size()<<endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class CircularQueue
{
public:
    int *arr;  // Pointer storage
    int size;  // Array size
    int front; // Index of front element
    int rear;  // Index of rear element

    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~CircularQueue()
    {
        delete[] arr;
    }

    void push(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % size))
        {
            cout << "Q is full,can't insert" << endl;
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        if (front == -1)
        {
            // Queue is empty
            cout << "Q is empty" << endl;
        }
        else if (front == rear)
        {
            arr[front] = -1;
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }

    int getFront()
    {
        if (front == -1)
        {
            cout << "Q is empty" << endl;
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    bool isEmpty()
    {
        if (front == rear)
        {
            // Queue is empty
            return true;
        }
        else
        {
            return false;
        }
    }

    int getSize()
    {
        if (front == -1)
            return 0;
        if (rear >= front)
            return rear - front + 1;
        else
            return size - front + rear + 1;
    }
};

int main()
{
    // * Circular Queue
    // ! rear circular m element pr hogi

    CircularQueue q(10);

    q.push(5);
    q.push(15);
    q.push(25);

    cout << "Size of queue is: " << q.getSize() << endl;

    q.pop();
    cout << "Size of queue after pop: " << q.getSize() << endl;

    cout << "Front element is: " << q.getFront() << endl;

    if (q.isEmpty())
    {
        cout << "Q is empty" << endl;
    }
    else
    {
        cout << "Q is non-empty" << endl;
    }

    return 0;
}
/*
class MyCircularQueue {
public:
    vector<int> q;
    int first;
    int size;
    
    MyCircularQueue(int k) {
        q = vector<int>(k, 0);
        first = 0;
        size = 0;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        q[(first + size) % q.size()] = value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        first = (first + 1) % q.size();
        size--;
        return true;
    }
    
    int Front() {
        if (isEmpty()) return -1;
        return q[first];
    }
    
    int Rear() {
        if (isEmpty()) return -1;
        return q[(first + size - 1) % q.size()];
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == q.size();
    }
};
*/
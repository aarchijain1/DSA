/*
void sortedInsert(stack<int> &s , int num){
    // base case
    if(s.empty()|| (!s.empty()&& s.top(),num)){
        s.push(num);
        return;
    }
    int n= s.top();
    s.pop();

    // recursive call
    sortedInsert(s,num);
    s.push(n);
}

void sortStack(stack<int> &s){
    // base case
    if(s.empty()){
        return;
    }
    int num= s.top();
    s.pop();

    // recursive call
    sortStack(s);
    sortedInsert(s,num);
}
*/
#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k) {
  
    //algo:

    //STEP 1)first k element stack me daaldo  and queue se hatado
    //STEP 2) k element stack se nikalke wapas queue me daalde 
    //STEP 3) fer queue k (n-k) starting k elements, wapas queue me daalde
    stack<int>s;
       for(int i = 0; i<k; i++) {
        int val = q.front();
        q.pop();
        s.push(val);
    }
    
    while(!s.empty()) {
        int val = s.top();
        s.pop();
        q.push(val);
    }
    int t = q.size()-k;
    
    while(t--) {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    
    return q;
}
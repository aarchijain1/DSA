// queue<int> rev(queue<int> q){
//     stack<int>s;
//     while(! q.empty()){
//         int ele = q.front();
//         q.pop();
//         s.push(ele);
//     }
//     while(! s.empty()){
//         int ans = s.top();
//         s.pop();
//         q.push(ans);
//     }
//     return q;
// }
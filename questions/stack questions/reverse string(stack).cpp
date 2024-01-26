// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//  sol1-       
            // int st=0;
//         // int e=s.size()-1;
//         // while(st<e){
//         //     swap(s[st++],s[e--]);

//  sol2-
//         stack<char> a;
//         for(int i=0; i<s.size(); i++){
//                a.push(s[i]);
//         }
//         s.clear();  
//         while(!a.empty()){
//             s.push_back(a.top());
//             a.pop();
//         }
//     }
// };
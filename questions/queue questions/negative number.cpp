#include <bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
         deque<long long int> dq;
         vector<long long> ans;
         
         //process first window
         for(int i=0; i<K; i++) {
             if(A[i] < 0) {
                 dq.push_back(i);
             }
         }
         
         //push ans for FIRST window
         if(dq.size() > 0) {
             ans.push_back(A[dq.front()]);
         }
         else
         {
             ans.push_back(0);
         }
         
         //now process for remaining windows
         for(int i = K; i<N; i++) {
             //first pop out of window element
             
             
             if(!dq.empty() && (i - dq.front())>=K ) {
                 dq.pop_front();
             }
             
             //then push current element
             if(A[i] < 0)
                dq.push_back(i);
             
            // put in ans
            if(dq.size() > 0) {
                 ans.push_back(A[dq.front()]);
            }
            else
            {
                ans.push_back(0);
            }
         }
         return ans;
 }
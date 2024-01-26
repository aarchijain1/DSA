/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// using Floyd's Cycle-Finding Algorithm and space complexity is O(1)
//Floyd Algorithm
// class Solution {
// public:
//   bool hasCycle(ListNode *head) {
//     if(head==NULL || head->next==NULL)
//     return false;
//    ListNode* slow=head;
//    ListNode* fast=head; 
//     while(fast!=NULL && fast->next!=NULL){
//         slow=slow->next;
//         fast=fast->next->next;
//         if(fast==slow)
//             return true;
//     }
//     return false;
// }
// };
//  using map but space complexity is O(n)

// class Solution {
// public:
//   bool hasCycle(ListNode *head) {
//     if(head==NULL)
//         return false;
//     unordered_map<ListNode*,int> map;
//     while(head!=NULL){
//         if(map.count(head)>0) return true;
//         else
//             map[head]=1;
//         head=head->next;
//     }
//     return false;
// }
// };
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
/*
class Solution {
public:
    int length(ListNode* head){
        int count=0;
        while(head){
            count++;
            head= head->next;
        }
        return count;
    }

    ListNode*solve(ListNode*head, int k, int size){
        int count = 0;
        ListNode* curr = head; 
        ListNode* prev = NULL;
        ListNode*next = NULL;
        while(count < k && curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        size -= k;

        if(next && size >= k){
            head->next = solve(next , k, size);
        }
        else head->next = next;
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        return solve(head, k, length(head));
    }
};
*/
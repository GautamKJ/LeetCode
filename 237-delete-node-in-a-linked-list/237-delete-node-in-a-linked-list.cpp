/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode *prev=node;
        ListNode *curr=node;
        ListNode *nxt;
        
        while(curr->next){
            nxt=curr->next;
            if(nxt)
            swap(curr->val,nxt->val);
            prev=curr;
            curr=nxt;
        }
        prev->next=NULL;
    }
};
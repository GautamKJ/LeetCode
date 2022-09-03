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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL)
            return head;
        
        ListNode *temp=head;
        ListNode *start=head;
        ListNode *prev=head;
        while(temp){
            
            if(temp->val==val && temp==start){
                start=temp->next;
            }
             if(temp->val ==val && temp!=start){
                prev->next=temp->next;
            }
            else
            prev=temp;
            
            temp=temp->next;
        }
                
                return start;
        
    }
};
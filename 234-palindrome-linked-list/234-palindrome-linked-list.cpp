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
    ListNode *findMid(ListNode *head){
        ListNode *slow=head;
        ListNode*fast=head;
        ListNode *prev=head;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        return prev;
    }
    
     ListNode *reversell(ListNode *head){
        ListNode *curr=head;
        ListNode*nxt=head;
        ListNode *prev=NULL;
        while(curr){
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        
        ListNode *mid=findMid(head);
        ListNode* head2=reversell(mid->next);
        mid->next=NULL;
        
        ListNode *temp1=head,*temp2=head2;
        while(temp1 && temp2){
            if(temp1->val!=temp2->val)
                return false;
            
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
        
        
    }
};

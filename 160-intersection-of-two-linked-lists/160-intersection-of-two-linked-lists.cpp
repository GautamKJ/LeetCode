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
    int Count(ListNode *head){
        if(head==NULL)
            return 0;
        ListNode *temp;
        temp=head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        
        int count_a=Count(headA);
        int count_b=Count(headB);
        
        if(count_a>count_b)
            return getIntersectionNode(headB,headA);
        
        int diff=abs(count_a-count_b);
        
        ListNode *tempB=headB,*tempA=headA;
        
        while(diff && tempB){
            tempB=tempB->next;
            diff--;
        }
        if(tempB==tempA)
            return tempA;
        
        while(tempB &&tempA){
            if(tempB->next ==tempA->next)
                return tempB->next;
            tempB=tempB->next;
            tempA=tempA->next;
        }
        return NULL;
        
        
    }
};
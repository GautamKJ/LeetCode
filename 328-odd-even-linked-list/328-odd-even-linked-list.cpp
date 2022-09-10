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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next)
            return head;
        
        ListNode*evenStart=head->next;
        ListNode *oddStart=head;
        
        ListNode*temp=head->next->next;
        ListNode *even=evenStart;
        ListNode *odd=oddStart;
        int i=3;
        // cout<<temp->val<<endl;
        while(temp){
            
            if(i%2!=0)
            {odd->next=temp;
                odd=odd->next;}
            else
                {even->next=temp;
                even=even->next;}
         
            temp=temp->next;
            i++;
        }
        
        even->next=NULL;
        odd->next=evenStart;
        return head;
        
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL)
            return root;
        if((p->val>root->val && q->val<root->val )||(q->val>root->val && p->val<root->val))
            return root;
        if(p->val==root->val || q->val==root->val)
            return root;
        
         TreeNode *left=NULL,*right=NULL;
        if(p->val<root->val || q->val<root->val)
         left=lowestCommonAncestor(root->left,p,q);
        else if(p->val>root->val || q->val>root->val)
         right=lowestCommonAncestor(root->right,p,q);
        else
        
        
            
        if(left&& right)
            return root;
        if(!left)
            return right;


            return left;
        
    }
};
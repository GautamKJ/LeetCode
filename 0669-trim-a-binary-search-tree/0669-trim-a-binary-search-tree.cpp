/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode *solve(TreeNode *root,int l,int h){
        if(root==NULL)
            return NULL;
        TreeNode *temp=root;
      
        
        
          root->left= solve(root->left,l,h);
            
            root->right=solve(root->right,l,h);
        
        
          if(root->val<l || root->val>h){
            if(root->right!=NULL && root->left!=NULL)
            temp=solve(root->left,l,h);
            
            else if(root->right!=NULL)
                temp=solve(root->right,l,h);
            else
                temp=solve(root->left,l,h);
        }
        
        return temp;
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        
        return solve(root,low,high);
    }
};
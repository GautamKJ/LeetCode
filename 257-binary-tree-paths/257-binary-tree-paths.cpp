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
    void solve(TreeNode*root,vector<string>&res,string temp){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL)
        {   temp+=to_string(root->val);
            res.push_back(temp);
        return;}
        
        solve(root->left,res,temp+to_string(root->val)+"->");
        solve(root->right,res,temp+to_string(root->val)+"->");
        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        
        solve(root,res,"");
        return res;
    }
};
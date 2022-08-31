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
class BSTIterator {
public:
    vector<int>inorder;
        int ptr;
    void Inorder_ele(TreeNode*root){
        if(root==NULL)
            return;
        
        Inorder_ele(root->left);
        inorder.push_back(root->val);
        Inorder_ele(root->right);
    }
    BSTIterator(TreeNode* root) {
        ptr=-1;
        
        Inorder_ele(root);
        
    }
    
    int next() {
       
          
        ptr++;
          return inorder[ptr];
            
    }
    
    bool hasNext() {
        if(ptr+1<inorder.size())
            return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
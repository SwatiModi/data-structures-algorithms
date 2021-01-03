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
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
            return true;
        
        int l = depth(root->left);
        int r = depth(root->right);
        
        if(abs(l-r)<=1 && isBalanced(root->left) && isBalanced(root->right))
            return true;
        return false;
    }
    
    int depth(TreeNode* root){
        if(root==NULL)
            return 0;
        int l = depth(root->left);
        int r = depth(root->right);
        
        if(l>r)
            return 1+l;
        
        return 1+r;
    }
};

// Used similar concept as that of depth of btree
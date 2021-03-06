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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        if(root==NULL)
            return v;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        TreeNode* curr = q.front();
        while(!q.empty() && q.front()!=NULL){
            curr = q.front();
            q.pop();
            if(curr->left)
                q.push(curr->left);
            if(curr->right)
                q.push(curr->right);
            if(!q.front()){
                v.push_back(curr->val);
                q.pop();
                q.push(NULL);
            }
        }
        return v;
    }
};

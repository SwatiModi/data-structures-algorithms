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
    int minDepth(TreeNode* root) {
        int c=0;
        if(root==NULL)
            return 0;
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            c++;
            vector<int> temp;
            int s=q.size();
            for(int i=0; i<s; i++){
                TreeNode* t=q.front();
                q.pop();
                if(t->left)
                    q.push(t->left);
                if(t->right)
                    q.push(t->right);
                if(!t->left && !t->right)
                    return c;
            }
        }
        return c;
    }
};
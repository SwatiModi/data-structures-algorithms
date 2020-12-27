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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> r;
        vector<int> t;
        if(!root)
            return r;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            TreeNode* c = q.front();
            q.pop();
            if(c==NULL){
                if(q.size()>0){
                    r.push_back(t);
                    t.clear();
                    q.push(NULL);
                }
            }else{
                t.push_back(c->val);
                if(c->left)
                    q.push(c->left);
                if(c->right)
                    q.push(c->right);
            }
        }
        r.push_back(t);
        return r;
    }
};
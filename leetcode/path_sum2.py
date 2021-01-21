# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pathSum(self, root: TreeNode, targetSum: int) -> List[List[int]]:
        res = []
        self.dfs(root, targetSum, [], res)
        return res
    
    def dfs(self, root, targetSum, ls, res):
        if root is None:
            return False
        
        if root.left is None and root.right is None and root.val == targetSum:
            ls.append(root.val)
            res.append(ls)
            
        self.dfs(root.left, targetSum-root.val, ls + [root.val], res) 
        self.dfs(root.right, targetSum-root.val, ls + [root.val], res)
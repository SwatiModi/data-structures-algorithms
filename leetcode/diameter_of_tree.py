# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        self.dep = 0
        def depth(node:TreeNode):
            if not node:
                return 0
            
            l = depth(node.left)
            r = depth(node.right)
            self.dep = max(self.dep, l+r)
            return max(l,r)+1
        
        depth(root)
        return self.dep
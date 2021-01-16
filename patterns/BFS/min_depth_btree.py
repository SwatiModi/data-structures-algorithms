# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def minDepth(self, root: TreeNode) -> int:
        if root is None:
            return 0
        
        queue = [root]
        next_queue = []
        depth = 0
        
        while queue:
            depth += 1
            for node in queue:
                if not node.left and not node.right:
                    return depth
                if node.left:
                    next_queue.append(node.left)
                if node.right:
                    next_queue.append(node.right)
            queue = next_queue
            next_queue = []
            
        return depth
        
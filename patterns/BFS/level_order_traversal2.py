# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:
        if root is None:
            return []
        
        queue = [root]
        next_queue = []
        level = []
        result = []
        
        while queue != []:
            for node in queue:
                level.append(node.val)
                if node.left:
                    next_queue.append(node.left)
                if node.right:
                    next_queue.append(node.right)
            result.append(level)
            level = []
            queue = next_queue
            next_queue = []
            
        return result[::-1]
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfLevels(self, root: TreeNode) -> List[float]:
        if root is None:
            return []
        
        queue = [root]
        next_queue = []
        avg = []
        level_sum = 0
        
        while queue:
            for node in queue:
                level_sum += node.val
                if node.left:
                    next_queue.append(node.left)
                if node.right:
                    next_queue.append(node.right)
                
            avg.append(level_sum/len(queue))
            queue = next_queue
            level_sum = 0
            next_queue = []
            
        return avg
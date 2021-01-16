# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def levelOrder(self, root: TreeNode) -> List[List[int]]:
        if root is None:
            return []

        queue = [root]      # list of nodes in current level
        next_queue = []     # list of nodes in next level (i.e. left and right child of current nodes)
        level = []          # list of node values in current level
        result = []

        while queue != []:
            for node in queue:  # for every node in current level
                level.append(node.val)  # append value of the node

		        # add current level children for next level queue
                if node.left:
                    next_queue.append(node.left)
                if node.right:
                    next_queue.append(node.right)

            result.append(level)
            level = []
            queue = next_queue
            next_queue = []

        return result

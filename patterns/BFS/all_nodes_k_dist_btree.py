# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def distanceK(self, root: TreeNode, target: TreeNode, K: int) -> List[int]:
        if root is None:
            return []
        
		# if distance of 0 is asked the return the target node itself
        if K == 0:
            return [target.val]
        
		# In first BFS iteration we will create a Parent mapping for every node (for root it will be None) 
		# as we also want to traverse up from the target node
		
        queue = [root]
        next_queue = []
        parent = {}
        parent[root] = None
        
        while queue:
            for node in queue:
                if node.left:
                    next_queue.append(node.left)
                    parent[node.left] = node
                if node.right:
                    next_queue.append(node.right)
                    parent[node.right] = node
            queue = next_queue
            next_queue = []
            
        # Now traditional BFS but taking parent along with left and right child
        queue = [target]
        next_queue = []
        res = []
		
		# keeping a track of visited nodes 
        seen = set()
        
        while queue:
            for node in queue:
                seen.add(node)
                if K == 0:
                    res.append(node.val)
                if node.left and node.left not in seen:
                    next_queue.append(node.left)
                if node.right and node.right not in seen:
                    next_queue.append(node.right)
                if parent[node] and parent[node] not in seen:
                    next_queue.append(parent[node])
			
			# we will decrement K and when it will become 0 we will get to the result, 
			# i.e. we have successfully travelled to K nodes away from target

            K -= 1
            queue = next_queue
            next_queue = []
        
        return res

# My post - https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/discuss/1020055/python-24ms-very-simple-soln-using-bfs-parent-dict-visited-set-explained
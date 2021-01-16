"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

class Solution:
    def cloneGraph(self, node: 'Node') -> 'Node':
        if node is None:
            return None
        
        q = collections.deque()
        clones = {}
        clones[node] = Node(node.val, [])
        q.append(node)
        
        while q:
            curr = q.popleft()
            for nn in curr.neighbors:
                if nn not in clones:
                    clones[nn] = Node(nn.val, [])
                    q.append(nn)
                clones[curr].neighbors.append(clones[nn])
        return clones[node]

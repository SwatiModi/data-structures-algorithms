class Solution(object):
    def kthSmallest(self, matrix, k):
        """
        :type matrix: List[List[int]]
        :type k: int
        :rtype: int
        """
        
        heap = []
        
        for x in matrix:
            for y in x:
                heapq.heappush(heap, y)
                
        i=0
        while i<k-1:
            heapq.heappop(heap)
            i+=1
        
        return heap[0]
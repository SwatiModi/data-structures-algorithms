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


#         if len(matrix) == 0:
#             return 0
        
#         heap = []
#         for row in matrix:
#             heap = list(heapq.merge(heap, row))
        
#         return heap[k-1]


# 120 ms binary search
# class Solution(object):
#     def kthSmallest(self, matrix, k):
#         """
#         :type matrix: List[List[int]]
#         :type k: int
#         :rtype: int
#         """
#         import sys
#         l, r = matrix[0][0], matrix[-1][-1]
#         while l < r:
#             m = (l + r)//2
#             j = len(matrix[0]) - 1 
#             cnt = 0 
#             for i in range(len(matrix)):
#                 while j >= 0 and matrix[i][j] > m:
#                     j -= 1 
#                 cnt += j + 1 
#             if cnt >= k:
#                 r = m
#             else:
#                 l = m + 1 
#         return r 


# Given an integer array nums and an integer k, return the kth largest element in the array.

# Note that it is the kth largest element in the sorted order, not the kth distinct element.


class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        min_heap = []
        
        for i in range(k):
            heappush(min_heap, nums[i])
            
        for i in range(k, len(nums)):
            if nums[i] > min_heap[0]:
                heappop(min_heap)
                heappush(min_heap, nums[i])
            
        return min_heap[-k]


# Runtime: 60 ms, faster than 86.60% of Python3 online submissions for Kth Largest Element in an Array.
# Memory Usage: 15.1 MB, less than 74.37% of Python3 online submissions for Kth Largest Element in an Array.

# https://leetcode.com/problems/kth-largest-element-in-an-array/discuss/1164602/py3-faster-than-86.60-mem-less-than-74.37-easy-to-understand-explained
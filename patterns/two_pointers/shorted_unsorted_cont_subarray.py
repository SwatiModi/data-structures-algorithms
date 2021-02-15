# Given an integer array nums, you need to find one continuous subarray that if you only sort this subarray in ascending order, 
# then the whole array will be sorted in ascending order.

# Return the shortest such subarray and output its length.
import math
from typing import List

class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        l, r = 0, len(nums)-1
        
        while(l < len(nums)-1 and nums[l] <= nums[l+1]):
            l += 1
        
        if l == len(nums) -1:    # array is sorted already
            return 0
        
        while(r > 0 and nums[r] >= nums[r-1]):
            r -= 1
            
        _max = -math.inf
        _min = math.inf
        
        for k in range(l, r +1):
            _max = max(_max, nums[k])
            _min = min(_min, nums[k])
            
        while(l > 0 and nums[l-1] > _min):
            l -= 1
            
        while(r < len(nums)-1 and nums[r+1] < _max):
            r += 1
            
        # return nums[l:r+1]
        return r-l+1
        
s = Solution()
print(s.findUnsortedSubarray([1,3,2,4]))
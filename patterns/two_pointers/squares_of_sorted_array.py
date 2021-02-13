# Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        l = 0
        r = len(nums) - 1
        n = r
        res = [None] * len(nums)
        
        for i in range(len(nums)):
            if (abs(nums[l]) > abs(nums[r])):
                res[n-i] = nums[l] * nums[l]
                l += 1
            else:
                res[n-i] = nums[r] * nums[r]
                r -= 1
                
        return res
        
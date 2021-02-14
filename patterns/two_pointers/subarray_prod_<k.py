# Your are given an array of positive integers nums.

# Count and print the number of (contiguous) subarrays where the product of all the elements in the subarray is less than k.

class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        st = 0
        prod = 1
        c = 0
        
        for ed in range(len(nums)):
            prod *= nums[ed]
            
            while prod >= k and st <= ed:
                prod /= nums[st]
                st += 1
                
            c += ed -st +1
                
        return c
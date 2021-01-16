class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        if nums is None:
            return -1
        
        tsum = 0
        for num in nums:
            tsum += num
            
        lsum = 0
        for i in range(len(nums)):
            if lsum == tsum - lsum -nums[i]:
                return i
            lsum += nums[i]
            
        return -1
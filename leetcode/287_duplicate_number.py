class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        
        for n in nums:
            if nums[abs(n)-1] < 0:
                res = abs(n)
            else:
                nums[abs(n)-1] *=-1
                
        return res
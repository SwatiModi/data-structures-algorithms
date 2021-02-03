class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        res = []
        i = 0
        
        while i < len(nums):
            num = nums[i]
            if nums[num - 1] == num:
                i += 1
            else:
                nums[i], nums[num - 1] = nums[num - 1], nums[i]
            
        for i in range(len(nums)):
            if nums[i] != i + 1:
                res.append(i+1)
        
        return res
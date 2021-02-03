class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        c = {}
        
        for i in range(len(nums)):
            if nums[i] in c:
                c[nums[i]] += 1 
            else:
                c[nums[i]] = 1
            
        for num in c.keys():
            if c[num] == 1:
                return num
            
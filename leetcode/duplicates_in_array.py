class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
#         res = []
#         i = 0
        
#         while i < len(nums):
#             num = nums[i]
#             if nums[num - 1] == num:
#                 i += 1
#             else:
#                 nums[i], nums[num - 1] = nums[num - 1], nums[i]
            
#         for i in range(len(nums)):
#             if nums[i] != i + 1:
#                 res.append(nums[i])
        
#         return res

        res = []
        for x in nums:
            if nums[abs(x)-1] < 0:
                res.append(abs(x))
            else:
                nums[abs(x)-1] *= -1
        return res

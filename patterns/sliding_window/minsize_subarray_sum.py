class Solution:
    def minSubArrayLen(self, s: int, nums: List[int]) -> int:
        st = 0
        min_len, sum_so_far = len(nums)+1, 0
        for end in range(len(nums)):
            sum_so_far += nums[end]
            while sum_so_far >= s:
                min_len = min(min_len, end-st+1)
                sum_so_far -= nums[st]
                st += 1
        return 0 if min_len == len(nums)+1 else min_len

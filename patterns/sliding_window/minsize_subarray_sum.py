class Solution:
    def minSubArrayLen(self, s: int, nums: List[int]) -> int:
        st = 0
        min_len = len(nums) +1
        win_sum = 0
        
        for ed in range(len(nums)):
            win_sum += nums[ed]
            while win_sum >= s:
                min_len = min(min_len, ed-st+1)
                win_sum -= nums[st]
                st += 1

        if min_len == len(nums) +1:
            return 0
        return min_len

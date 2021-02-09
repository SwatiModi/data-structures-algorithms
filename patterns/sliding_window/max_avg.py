class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        
        st = 0
        max_sum, win_sum = float('-inf'), 0.0
        
        for end in range(len(nums)):
            win_sum += nums[end]
            if end >= k-1:
                max_sum = max(win_sum, max_sum)
                win_sum -= nums[st]
                st += 1
        
        return max_sum/k
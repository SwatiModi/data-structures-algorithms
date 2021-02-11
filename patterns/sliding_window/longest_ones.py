# Given an array A of 0s and 1s, we may change up to K values from 0 to 1.

# Return the length of the longest (contiguous) subarray that contains only 1s. 


class Solution:
    def longestOnes(self, A: List[int], K: int) -> int:
        st = 0
        max_len = 0
        num_ones = 0
        
        for ed in range(len(A)):
            if A[ed] == 1:
                num_ones += 1
                
            if ed -st +1 - num_ones > K:
                if A[st] == 1:
                    num_ones -= 1
                st += 1
                
            max_len = max(max_len, ed-st+1)
            
        return max_len
# Given a string s, find the length of the longest substring without repeating characters.

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        st = 0
        max_len = 0
        cmap = {}
        
        for ed in range(len(s)):
            r = s[ed]
            if r in cmap:
                st = max(st, cmap[r] + 1)
            cmap[r] = ed
            max_len = max(max_len, ed-st+1)
            
        return max_len
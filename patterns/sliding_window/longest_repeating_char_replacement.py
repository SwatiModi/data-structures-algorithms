# Given a string s that consists of only uppercase English letters, you can perform at most k operations on that string.

# In one operation, you can choose any character of the string and change it to any other uppercase English character.

# Find the length of the longest sub-string containing all repeating letters you can get after performing the above operations.

# Note:
# Both the string's length and k will not exceed 104.

class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        st = 0
        max_len_rep = 0
        max_len = 0
        cmap = {}
        
        for ed in range(len(s)):
            r = s[ed]
            if r not in cmap:
                cmap[r] = 0
            cmap[r] += 1
            max_len_rep = max(max_len_rep, cmap[r])
            
            if ed-st+1-max_len_rep > k:
                l = s[st]
                cmap[l] -= 1
                st += 1
                
            max_len = max(max_len, ed-st+1)
            
        return max_len
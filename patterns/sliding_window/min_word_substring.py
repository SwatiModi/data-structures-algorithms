
# Given two strings s and t, return the minimum window in s which will contain all the characters in t. If there is no such window in s that 
# covers all characters in t, return the empty string "".

# Note that If there is such a window, it is guaranteed that there will always be only one unique minimum window in s.

 

class Solution:
    def minWindow(self, s: str, t: str) -> str:
        st = 0
        mtc = 0
        cmap = {}
        min_st = 0
        min_len = len(s) + 1
        
        for c in t:
            if c not in cmap:
                cmap[c] = 0
            cmap[c] += 1
                
        for ed in range(len(s)):
            r = s[ed]
            if r in cmap:
                cmap[r] -= 1
                if cmap[r] >= 0:
                    mtc += 1
            
            while mtc == len(t):
                if min_len > ed -st +1:
                    min_len = ed-st+1
                    min_st = st


                l = s[st]
                st += 1
                if l in cmap:
                    if cmap[l] == 0:
                        mtc -= 1
                    cmap[l] += 1
        
        if min_len <= len(s):
            return s[min_st:min_st + min_len]
        else:
            return ""
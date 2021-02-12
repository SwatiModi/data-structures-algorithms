# Given a string s and a non-empty string p, find all the start indices of p's anagrams in s.

# Strings consists of lowercase English letters only and the length of both strings s and p will not be larger than 20,100.

# The order of output does not matter.

class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        st = 0
        mtc = 0
        cmap = {}
        res_idx = []
        
        for c in p:
            if c not in cmap:
                cmap[c] = 0
            cmap[c] += 1
            
        for ed in range(len(s)):
            r = s[ed]
            if r in cmap:
                cmap[r] -= 1
                if cmap[r] == 0:
                    mtc += 1
                    
            if mtc == len(cmap):
                res_idx.append(st)
                
            if ed >= len(p) -1:
                l = s[st]
                st += 1
                if l in cmap:
                    if cmap[l] == 0:
                        mtc -= 1
                    cmap[l] += 1
            
        return res_idx
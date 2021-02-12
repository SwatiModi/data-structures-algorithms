# Given two strings s1 and s2, write a function to return true if s2 contains the permutation of s1. In other words, one of the first string's 
# permutations is the substring of the second string.

class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:

        win_len = len(s1)
        s1_c = Counter(s1)
        win_c = Counter()
        
        for ed in range(len(s2)):
            win_c[s2[ed]] += 1
            
            if ed >= win_len:
                l = s2[ed - win_len]
                
                if win_c[l] == 1:
                    del win_c[l]
                else:
                    win_c[l] -= 1
                    
            if s1_c == win_c:
                return True
            

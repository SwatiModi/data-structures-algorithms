class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False
        
        win_size = len(s1)
        s1_c = Counter(s1)
        win_c = Counter()
        
        for i, c in enumerate(s2):
            win_c[c] +=1
            
            if i>= win_size:
                l = s2[i - win_size]
                
                if win_c[l] == 1:
                    del win_c[l]
                else:
                    win_c[l] -=1
                
            if win_c == s1_c:
                return True
        
        return False
                

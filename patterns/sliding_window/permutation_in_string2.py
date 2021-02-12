class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:

        st = 0
        mtc = 0
        cmap = {}
        
        for c in s1:
            if c not in cmap:
                cmap[c] = 0
            cmap[c] += 1
                
        for ed in range(len(s2)):
            r = s2[ed]
            if r in cmap:
                cmap[r] -= 1
                if cmap[r] == 0:
                    mtc += 1
            
            if mtc == len(cmap):
                return True
                
            if ed >= len(s1)-1:
                l = s2[st]
                st += 1
                if l in cmap:
                    if cmap[l] == 0:
                        mtc -= 1
                    cmap[l] += 1
                    
        return False
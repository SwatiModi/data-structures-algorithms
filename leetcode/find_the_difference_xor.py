class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        
        a = s+t
        res = 0
        for x in a:
            res = res^ord(x)
            
        return chr(res)
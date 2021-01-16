class Solution:
    def getRow(self, rowIndex: int) -> List[int]:      
        res = [1] * (rowIndex+1)
    
        for i in range(2, rowIndex+1):
            for j in reversed(range(1, i)):
                res[j] = res[j] + res[j-1]
                
        return res
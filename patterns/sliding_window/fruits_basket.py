class Solution:
    def totalFruit(self, tree: List[int]) -> int:
        st =0
        max_len = 0
        fruit_freq = {}
        
        for ed in range(len(tree)):
            rf = tree[ed]
            if rf not in fruit_freq:
                fruit_freq[rf] = 0
            fruit_freq[rf] += 1
            
            while len(fruit_freq) > 2:
                lf = tree[st]
                fruit_freq[lf] -= 1
                if fruit_freq[lf] == 0:
                    del fruit_freq[lf]
                st += 1
            max_len = max(max_len, ed-st+1)
            
        return max_len
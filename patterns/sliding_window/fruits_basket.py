# In a row of trees, the i-th tree produces fruit with type tree[i].

# You start at any tree of your choice, then repeatedly perform the following steps:

#     Add one piece of fruit from this tree to your baskets.  If you cannot, stop.
#     Move to the next tree to the right of the current tree.  If there is no tree to the right, stop.

# Note that you do not have any choice after the initial choice of starting tree: you must perform step 1, then step 2, then back to step 1, then step 2, and so on until you stop.

# You have two baskets, and each basket can carry any quantity of fruit, but you want each basket to only carry one type of fruit each.

# What is the total amount of fruit you can collect with this procedure?
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
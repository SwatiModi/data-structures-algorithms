# You are given an array prices where prices[i] is the price of a given stock on the ith day.

# Find the maximum profit you can achieve. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).

# peak-valley approach algo

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        for i in range(1, len(prices)):
            if prices[i] > prices[i-1]:
                profit += prices[i] - prices[i-1]
                
        return profit

# Runtime: 56 ms, faster than 89.48% of Python3 online submissions for Best Time to Buy and Sell Stock II.
# Memory Usage: 15.1 MB, less than 21.45% of Python3 online submissions for Best Time to Buy and Sell Stock II.

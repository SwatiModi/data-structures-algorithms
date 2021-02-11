class Solution:
    def fib(self, n: int) -> int:
        if n <= 1:
            return n
        else:
            return self.fib(n-1) + self.fib(n-2)

# TC - 2^n -  for each level of recursion, grows exponentially as the depth approaches N
# SC - O(n) 
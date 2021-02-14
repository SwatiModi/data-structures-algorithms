# Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

# Note that after backspacing an empty text, the text will continue empty.

class Solution:
    def backspaceCompare(self, S: str, T: str) -> bool:
        return self.helper(S) == self.helper(T)
    
    def helper(self, s):
        res = []
        for n in s:
            if n != "#":
                res.append(n)
            elif n == '#' and res:
                res.pop()
        return res
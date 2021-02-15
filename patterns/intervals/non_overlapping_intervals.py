# Given a collection of intervals, find the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

# You may assume the interval's end point is always bigger than its start point.
# Intervals like [1,2] and [2,3] have borders "touching" but they don't overlap each other.


class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        
        res = 0
        
        intervals.sort(key = lambda x:x[1])
        end = float('-inf')
        
        for n in intervals:
            if n[0] >= end:
                end = n[1]
            else:
                res += 1
                
        return res
# Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

# You may assume that the intervals were initially sorted according to their start times.

class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        res = []
        
        for n in intervals:
            if n[1] < newInterval[0]:
                res.append(n)
            elif n[0] > newInterval[1]:
                res.append(newInterval)
                newInterval = n
            elif n[1] >= newInterval[0] or n[0] <= newInterval[1]:
                newInterval[0] = min(n[0], newInterval[0])
                newInterval[1] = max(n[1], newInterval[1])
                
        res.append(newInterval)
        return res
                
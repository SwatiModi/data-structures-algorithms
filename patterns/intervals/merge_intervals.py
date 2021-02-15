# Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the 
# non-overlapping intervals that cover all the intervals in the input.

class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        
        if len(intervals) < 2:
            return intervals
        
        intervals.sort(key=lambda x:x[0])
        start, end = intervals[0][0], intervals[0][1]
        
        res = []
        for i in range(1, len(intervals)):
            interval = intervals[i]
            if interval[0] <= end:
                end = max(end, interval[1])
            else:
                res.append([start, end])
                start = interval[0]
                end = interval[1]
                
        res.append([start, end])
        return res
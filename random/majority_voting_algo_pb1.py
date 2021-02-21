# Given an array nums of size n, return the majority element.
# The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
# Follow-up: Could you solve the problem in linear time and in O(1) space?
# https://gregable.com/2013/10/majority-vote-algorithm-find-majority.html

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        major = nums[0]
        c = 1
        
        for i in range(1, len(nums)):
            if c == 0:
                major = nums[i]
                c += 1
            elif nums[i] == major:
                c += 1
            else:
                c -= 1
                
        return major
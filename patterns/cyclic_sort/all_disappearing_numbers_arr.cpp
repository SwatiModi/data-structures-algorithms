class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int i=0;
        while(i<nums.size()){
            if(nums[i]!=nums[nums[i]-1])
                swap(nums[i],nums[nums[i]-1]);
            else
                i++;
        }
        
        for(i=0; i<nums.size(); i++){
            if(nums[i]!=i+1)
                res.push_back(i+1);
        }
        return res;
    }
};

// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/discuss/989318/CPP-2-easy-to-understand-solutions-O(1)-space-O(n)-time-complexity
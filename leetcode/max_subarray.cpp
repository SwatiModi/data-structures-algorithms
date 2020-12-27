class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currMax=0, maxSoFar= INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            currMax = max(nums[i], currMax + nums[i]);
            maxSoFar = max(currMax, maxSoFar);
        }
        
        return maxSoFar;
    }
};
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int missing  = nums.size();
        
        for(int i=0; i<nums.size(); i++){
            missing = missing^i^ nums[i];
        }
        return missing;
        
        // int sum = 0;
        // for(auto a : nums)
        //     sum+=a;
        // int n = nums.size();
        // return n*(n+1)/2 - sum;
    }
};
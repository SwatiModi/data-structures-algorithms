class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 1);
        int ls =1;
        
        if(nums.size()==1)
            return dp[0];
        
        for(int i=1; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                if(nums[j] < nums[i])
                    dp[i] = max(dp[i], dp[j]+1);
            }
        }
        
        for(int i=0; i<dp.size(); i++){
            if(dp[i] > ls)
                ls = dp[i];
        }
        
        return ls;
    }
};
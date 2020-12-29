class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int minl=nums.size()+1, sum=0;
        int l=0;
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            while(sum>=s){
                minl = min(minl,i-l+1);
                sum -= nums[l++];
            }
        }
        
        if(minl == nums.size()+1)
            return 0;
        else
            return minl;
    }
};
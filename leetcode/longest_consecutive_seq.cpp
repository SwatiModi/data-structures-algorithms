class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        sort(nums.begin(), nums.end());
        int m = 1;
        int c = 1;
        
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]-1){
                c++;
            }
            else if(nums[i]!=nums[i+1]){
                c = 1;
            }
            m = max(c,m);
        }
        return m;
    }
};

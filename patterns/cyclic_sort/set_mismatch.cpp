class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int i=0;
        vector<int> res;
        while(i<nums.size()){
            if(nums[i]!=i+1 && nums[i]<=nums.size() && nums[i]!=nums[nums[i]-1])
                swap(nums[i], nums[nums[i]-1]);
            else
                i++;
        }

        
        for(i=0; i<nums.size(); i++){
            if(nums[i]!=i+1){
                res.push_back(nums[i]);
                res.push_back(i+1);
                break;
            }
        }
        
        return res;
    }
};
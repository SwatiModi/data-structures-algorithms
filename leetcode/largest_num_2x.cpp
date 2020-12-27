class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int lidx=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > nums[lidx]){
                lidx = i;
            }
        }
        
        int largest = nums[lidx];
        
        for(int i=0; i<nums.size(); i++){
            if(i!=lidx && (largest-2*nums[i] <0)){
                return -1;
            }
        }
        
        return lidx;
    }
};

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int mid =0;
        
        while(l<=r){
            mid = l+(r-l)/2;
            
            if(nums[mid] == target)
                return mid;
            
            //left sorted part 
            if(nums[l]<=nums[mid]){
                if(target > nums[mid] || target < nums[l])
                    l = mid +1;
                else
                    r = mid -1;
            }
            // right sorted part
            else{
                if(target < nums[mid] || target > nums[r])
                    r = mid -1;
                else
                    l = mid + 1;
            }
        }
        
        return -1;
    }
};
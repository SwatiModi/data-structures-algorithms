// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int currMax=nums[0], maxSoFar=nums[0];
//         for(int i=1; i<nums.size(); i++){
//             currMax = max(nums[i], currMax * nums[i]);
//             maxSoFar = max(currMax, maxSoFar);
//         }
        
//         return maxSoFar;
        
//     }
// };

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currMax=1, currMin=1, maxSoFar=INT_MIN;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]< 0)
                swap(currMax, currMin);
            currMax = max(nums[i], currMax * nums[i]);
            currMin = min(nums[i], currMin * nums[i]);
            maxSoFar = max(currMax, maxSoFar);
        }
        
        return maxSoFar;
        
    }
};
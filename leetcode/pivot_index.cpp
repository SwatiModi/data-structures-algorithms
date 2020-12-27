// my soln Runtime: 1728 ms Memory Usage: 31.2 MB
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0, right=0;
        int l = nums.size();
        if(l==0)
            return -1;
        for(int i=0; i<l; i++){
            left=0; right=0;
            for(int x=0; x<i; x++)
                left = left + nums[x];
            for(int y=i+1; y<l; y++)
                right = right + nums[y];
            if(left==right)
                return i;
        }
        return -1;
    }
};

// Other better solutions
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if (nums.empty()) {
            return -1;
        }
        int sum = 0;
        for(auto n : nums) {
            sum += n;
        }
        int leftSum = 0;
        for(int i=0; i<nums.size(); i++)  {
            if(leftSum == (sum-nums[i])/2 && (sum-nums[i]) % 2 == 0) {
                return i;
            }
            leftSum += nums[i];
        } 
        return -1;
        
    }
};

// my updated 48 ms solution
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if (nums.empty()) {
            return -1;
        }
        int tsum = 0, lsum=0;
        for(auto n: nums)
            tsum += n;
        for(int i=0; i<nums.size(); i++){
            if(lsum == tsum - lsum - nums[i])
                return i;
            lsum +=nums[i];
        }
        return -1;
        
    }
};

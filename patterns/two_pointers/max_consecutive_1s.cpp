class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0, max=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                c++;
            }
            else{
                if(c>max)
                    max =c;
                c=0;
            }
        }
        if(c>max)
            max=c;

        return max;
    }
};
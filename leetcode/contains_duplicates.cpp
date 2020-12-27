class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
       //  if(nums.size() < 2) 
       //      return false;
       //  for(int i=0; i<nums.size()-1; i++){
       //      if(nums[i]==nums[i+1])
       //          return true;
       //  }
       // return false;
        
        auto start = nums.begin();
        auto end = nums.end()-1;
        
        while(start!=end && (*start != *(start+1)))
            start++;
        
        if(start==end)
            return 0;
        else 
            return 1;
    }
};


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {   
        sort(nums.begin(), nums.end()); 
        for(int i = 1; i < nums.size(); i++) { 
            if(nums[i] == nums[i-1]) { 
                return true; 
            } 
        }  
        return false;  
    }
};
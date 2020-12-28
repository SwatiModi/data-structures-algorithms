class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=i+1;
        for(int i=0; i<numbers.size(); i++){
            for(int j=i+1; j<numbers.size(); j++){
                if(numbers[i]+numbers[j]==target)
                    return vector<int>{i+1,j+1};
            }
        }
        return vector<int>{i+1,j+1};
    }
};
// todo, wrong ans

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sum;
        sort(numbers.begin(), numbers.end());
        int i=0, j=numbers.size()-1;
        cout << numbers[i] << endl;
        
        while(i<j){
            sum = numbers[i]+numbers[j];
            cout << sum << " " << numbers[i] << " " << numbers[j] << endl;
            if(sum == target) 
                return vector<int>{i,j};
            else if(sum < target)
                i++;
            else
                j--;
        }
        
        return vector<int>{i,j};
    }
};
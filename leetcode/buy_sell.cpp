// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxp = 0;
//         for(int i=0; i <prices.size(); i++){
//             for(int k=i+1; k < prices.size(); k++){
//                 if(prices[k]-prices[i] > maxp)
//                     maxp = prices[k]-prices[i];
//             }
//         }
        
//         return maxp;
//     }
// };

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMax=0, maxSoFar=0;
        
        for(int i=1; i<prices.size(); i++){
            currMax = max(0, currMax + (prices[i] - prices[i-1]));
            maxSoFar = max(currMax, maxSoFar);
        }
        
        return maxSoFar;
    }
};

// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
        
//         sort(coins.begin(), coins.end(), greater<int>());
//         int i=0, n=coins.size(); int c=0;
        
//         while(n--){
//             c= amount / coins[i];
//             if(c)
//                 amount = amount % coins[i];
//             i++;
//         }
        
//         return c;
//     }
// };

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        vector<int> dp(amount+1, INT_MAX-1);      
        dp[0] = 0;
        
        for(int i=1; i<=amount ; i++){
            for(int j=0; j<coins.size(); j++){
                if(i-coins[j]>=0){
                    dp[i] = min(dp[i], dp[i-coins[j]]+1);
                }
            }
        }
        
        if(dp[amount] == INT_MAX-1)
            return -1;
        else
            return dp[amount];
    }
};
class Solution {
public:
    int climbStairs(int n) {
        if(n==1 || n==2)
            return n;
        unsigned int a=1, b=2, ways=0;
        n -= 2;
        while(n--){
            ways = a + b;
            a = b;
            b = ways;
        }
        return ways;
    }
};
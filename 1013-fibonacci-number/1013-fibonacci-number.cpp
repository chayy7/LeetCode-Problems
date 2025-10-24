class Solution {
public:

    int fibb(vector<int>& dp,int n){
        if(n <= 1){
            return n;
        }

        if(dp[n] != -1){
            return dp[n];
        }

        return dp[n] = fibb(dp,n-1)+fibb(dp,n-2);
    }
    int fib(int n) {
        

        vector<int> dp(n+1,-1);
        return fibb(dp,n);
        
    }
};
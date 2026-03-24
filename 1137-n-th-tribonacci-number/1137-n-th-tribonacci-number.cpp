class Solution {
public:
    int func(int n, vector<int>& dp){
        if(n == 0) return 0;
        if(n == 1 or n==2) return 1;

        if(dp[n] != -1){
            return dp[n];
        }

        return dp[n] = func(n-1, dp)+func(n-2,dp) + func(n-3,dp);
    }
    int tribonacci(int n) {
        vector<int> dp(n+1, -1);
        // dp[0]=0;
        // dp[1]=1;
        // dp[2]=1;
        // for(int i=3;i<=n;i++){
        //     dp[n] = dp[n-1]+dp[n-2]+dp[n-3];
        // }
        return func(n, dp);
        

    }
};
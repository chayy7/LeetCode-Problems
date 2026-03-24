class Solution {
public:
    // int func(int n, vector<int>& dp){
    //     if(n == 0) return 0;
    //     if(n == 1 or n==2) return 1;

    //     if(dp[n] != -1){
    //         return dp[n];
    //     }

    //     return dp[n] = func(n-1, dp)+func(n-2,dp) + func(n-3,dp);
    // }
    int tribonacci(int n) {
        if(n == 0) return 0;
         if(n == 1 or n==2) return 1;
        vector<int> dp(n+1, -1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<n+1;i++){
            dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
        }
        // return func(n, dp);

        for(auto i:dp){
            cout << i << " ";
        }

        return dp[n];
        

    }
};
class Solution {
public:
    int func(int n, int m, vector<vector<int>>& dp){
        if(n == 0 && m == 0) return 1;

        if(n < 0 || m < 0) return 0;

        if(dp[n][m] != -1) return dp[n][m];

        int up = func(n,m-1,dp);
        int left = func(n-1,m,dp);

        return dp[n][m] = up+left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return func(n-1,m-1, dp);
    }
};
class Solution {
public:
    int func(int i, int j, vector<vector<int>>& dp,int n,vector<vector<int>>& tri){
        if(i == n-1) return tri[i][j];

        if(dp[i][j] != INT_MAX) return dp[i][j];

        int down=tri[i][j] + func(i+1, j, dp, n, tri);
        int diag=tri[i][j] + func(i+1, j+1, dp, n, tri);
        return dp[i][j] = min(down, diag);
    }
    int minimumTotal(vector<vector<int>>& tri) {
        int n=tri.size();

        int i=0, j=0;
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));
        return func(i, j, dp,n, tri);
    }
};
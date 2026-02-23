class Solution {
public:
    int func(int i, int j, vector<vector<int>>& dp, vector<vector<int>>& tri) {
        int n = tri.size();
        if (i == n - 1)
            return tri[i][j];

        if (dp[i][j] != INT_MAX)
            return dp[i][j];

        int down = func(i + 1, j, dp, tri);
        int diag = func(i + 1, j + 1, dp, tri);

        return dp[i][j] = tri[i][j] + min(down, diag);
    }

    int minimumTotal(vector<vector<int>>& tri) {
        int n = tri.size();
        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

        return func(0, 0, dp, tri);
    }
};
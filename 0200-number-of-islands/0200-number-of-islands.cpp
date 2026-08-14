class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& vstd,vector<vector<char>>& grid){
        int n = grid.size();
        int m = grid[0].size();


        if(i < 0 || i >= n || j<0 || j >= m) return;

        if(vstd[i][j] || grid[i][j] == '0') return;

        vstd[i][j] = 1;

        dfs(i-1, j, vstd, grid);
        dfs(i+1, j, vstd, grid);
        dfs(i, j-1, vstd, grid);
        dfs(i, j+1, vstd, grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();


        vector<vector<int>> vstd(n , vector<int>(m, 0));

        for(int i=0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(!vstd[i][j] && grid[i][j] == '1'){
                    cnt++;
                    dfs(i, j, vstd, grid);
                }
            }
        }


        return cnt;
    }
};
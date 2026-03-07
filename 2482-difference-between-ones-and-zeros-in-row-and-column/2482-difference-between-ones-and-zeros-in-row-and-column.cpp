class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        map<int, int> row1;
        map<int, int> row0;
        map<int, int> col1;
        map<int, int> col0;
        
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> ans(row, vector<int>(col));
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j] == 1){
                    row1[i]++;
                    col1[j]++;
                }else if(grid[i][j] == 0){
                    row0[i]++;
                    col0[j]++;
                }                
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                ans[i][j] = row1[i] + col1[j] - row0[i] - col0[j];
            }
        }
        return ans;
    }
};
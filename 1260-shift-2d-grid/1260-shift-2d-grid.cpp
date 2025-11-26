class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> v;
        for(auto i:grid){
            for(auto j:i){
                v.push_back(j);
            }
        }

        reverse(v.begin(),v.end()-k);
        reverse(v.end()-k,v.end());
        reverse(v.begin(),v.end());

        int c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                grid[i][j] = v[c++];
            }
        }

        return grid;
    }
};
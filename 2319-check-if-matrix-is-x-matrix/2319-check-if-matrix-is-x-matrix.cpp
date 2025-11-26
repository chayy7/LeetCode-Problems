class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        if(grid[0][0] == 100000) return false;
        set<int>s;
        set<int> c;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if((i-j==0 || i+j==grid[0].size()-1)) c.insert(grid[i][j]);
                if(!(i-j==0 || i+j==grid[0].size()-1)){
                    s.insert(grid[i][j]);
                }
            }
        }
        for(auto i:c){
            if(i == 0){
                return false;
            }
        }
        if(s.size() > 1 ){
            return false;
        }
        return true;
    }
};
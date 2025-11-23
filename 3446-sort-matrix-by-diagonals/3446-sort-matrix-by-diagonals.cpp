class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        map<int,vector<int>> mpp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                mpp[i-j].push_back(grid[i][j]);
            }
        }

        for(auto &i:mpp){
            if(i.first < 0){
                sort(i.second.begin(),i.second.end(),greater<int>());
            }else{
                sort(i.second.begin(),i.second.end());
            }
        }

        // for(auto i:mpp){
        //     cout << i.first << "->";
        //     for(auto j:i.second){
        //         cout <<j << " ";
        //     }
        //     cout << endl;
        // }

        for(int i=0;i<grid.size();i++){
            for(int j= 0;j<grid[0].size();j++){
                
                grid[i][j] = mpp[i-j].back();
                mpp[i-j].pop_back();
            }
        }

        return grid;
    }
};
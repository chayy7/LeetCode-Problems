class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<int> v;
        for(int i=0;i<n;i++){

            if(i%2 != 0){
                reverse(grid[i].begin(), grid[i].end());

            }
            for(auto k:grid[i]){
                
                v.push_back(k);
            }
        }
        vector<int> ans;
        int i=0;
        while(i < v.size()){
            ans.push_back(v[i]);
            i+=2;
        }
        return ans;
    }
};
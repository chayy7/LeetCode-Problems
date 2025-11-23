class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        map<int,vector<int>> mpp;

        for(int i = 0;i<mat.size();i++){
            for(int j = 0;j<mat[0].size();j++){
                mpp[i+j].push_back(mat[i][j]);
            }
        }

        vector<int> v;
        for(auto i: mpp){
            if(i.first %2 == 0){
                reverse(i.second.begin(),i.second.end());
                for(auto j :i.second){
                    // cout << j << " ";
                    v.push_back(j);
                }
            }else{
                for(auto j :i.second){
                    cout << j << " ";
                    v.push_back(j);
                }

            }
        }

        return v;
    }
};
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        map<int,vector<int>> mpp;

        for(int i = 0;i<mat.size();i++){
            for(int j = 0;j<mat[0].size();j++){
                mpp[i-j].push_back(mat[i][j]);
            }
        }

        vector<int> v;
        for(auto &i:mpp){
            // cout << i.first << "->";
            sort(i.second.begin(),i.second.end(),greater<int>());
        }

        for(int i = 0;i<mat.size();i++){
            for(int j = 0;j<mat[0].size();j++){
                mat[i][j]= mpp[i-j].back();
                mpp[i-j].pop_back();

            }
        }

        // sort(v.begin(),v.end());
        for(auto i: v){
            cout << i << " ";
        }

        return mat;
    }
};
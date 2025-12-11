class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        vector<vector<int>> v(mat.size(), vector<int>(mat[0].size()));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                v[i][j]=mat[j][i];

            }
        }

        for(int i=0;i<v.size();i++){
            reverse(v[i].begin(),v[i].end());
        }

        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                mat[i][j] = v[i][j];
            }
        }
    }

};
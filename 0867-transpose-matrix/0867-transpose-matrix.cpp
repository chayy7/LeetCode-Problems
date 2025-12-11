class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        vector<vector<int>> v(m, vector<int>(n));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[j][i] = mat[i][j];
            }
        }

        for(auto i:v){
            for(auto j:i){
                cout << j << " ";
            }

            // cout << i << " ";
        }

        return v;
    }
};
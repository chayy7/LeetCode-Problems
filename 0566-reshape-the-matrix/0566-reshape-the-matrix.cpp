class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n!=r*c) return mat;







        vector<vector<int>> v(r, vector<int>(c));


        vector<int> cc;
        for(auto i:mat){
            for(auto j:i){
                cc.push_back(j);
            }
        }


        int x=0;
        for(int i=0;i<r;i++){
            for(int j =0;j<c;j++){
                v[i][j] = cc[x++];
            }
        }

        return v;
    }
};
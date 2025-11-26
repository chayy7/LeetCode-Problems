class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        // map<int,vector<int>> mpp;
        vector<int> v;

        for(int i= 0;i<mat.size();i++){
            for(int j = 0;j<mat[0].size();j++){
                if(i-j == 0 || (i+j)==mat[0].size()-1) v.push_back(mat[i][j]);
            }
        }
        int sum=0;
        for(auto i:v){
            sum+=i;
        }


        return sum;
    }
};
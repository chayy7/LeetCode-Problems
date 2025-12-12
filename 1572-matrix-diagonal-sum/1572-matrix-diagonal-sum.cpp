class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        vector<int> v;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i-j) == 0 || (i+j)%(n-1) == 0){
                    v.push_back(mat[i][j]);
                }
            }
        }
        int sum=0;
        for(auto i:v){
            sum += i;
            cout << i << " ";
        }

        return sum;


    }
};
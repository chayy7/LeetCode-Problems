class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        // vector<int> v;

        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i-j) == 0 || (i+j)%(n-1) == 0){
                    sum += mat[i][j];
                }
            }
        }
        
        return sum;


    }
};
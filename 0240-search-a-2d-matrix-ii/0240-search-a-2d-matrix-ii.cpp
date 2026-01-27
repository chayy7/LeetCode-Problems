class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n= mat.size();
        int m= mat[0].size();

        int l= 0;
        int r = m-1;

        while( r>= 0 && l< n){
            if(mat[l][r] == target){
                return true;
            }else if(mat[l][r] > target){
                r--;
            }else{
                l++;
            }
        }

        return false;
    }
};
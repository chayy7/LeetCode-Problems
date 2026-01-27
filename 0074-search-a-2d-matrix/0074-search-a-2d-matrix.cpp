class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n= mat.size();
        int m= mat[0].size();

        int l=0, r= n*m-1;
        while(l <= r){
            int mid =( l+r)/2;
            int rr = mid/m;
            int c = mid%m;
            if(mat[rr][c] == target){
                return true;
            }else if(mat[rr][c] < target){
                l = mid+1;
            }else{
                r= mid-1;
            }
        }
        return false;
    }
};
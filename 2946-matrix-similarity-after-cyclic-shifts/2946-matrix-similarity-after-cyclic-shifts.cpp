class Solution {
public:
    void ls(vector<int>& row){
        reverse(row.begin(), row.begin()+1);
        reverse(row.begin()+1, row.end());
        reverse(row.begin(), row.end());
    }
    void rs(vector<int>& row){
        reverse(row.begin(), row.end()-1);
        reverse(row.end()-1, row.end());
        reverse(row.begin(), row.end());
    }
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> v(mat.begin(), mat.end());
        
        int n=mat.size();
        int m=mat[0].size();
        k %= m;

        while(k--){
            int i=0;
            for(auto& row:mat){
                if(i % 2 == 0){

                    ls(row);
                }else{
                    rs(row);
                }
                i++;
            }
        }

        
        return v==mat;
    }
};
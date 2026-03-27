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
        // for(auto i:v){
        //     for(auto j:i){
        //         cout << j << " "; 
        //     }
        //     cout << endl;
        // }
        int n=mat.size();
        int m=mat[0].size();

        int i=0;
        while(k--){
            for(int i = 0; i < n; i++){
                if(i % 2 == 0){
                    ls(mat[i]);
                } else {
                    rs(mat[i]);
                }
            }
        }

        for(auto i:mat){
            for(auto j:i){
                cout << j << " "; 
            }
            cout << endl;
        }
        

        return v==mat;
    }
};
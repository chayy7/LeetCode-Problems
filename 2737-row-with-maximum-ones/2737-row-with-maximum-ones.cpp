class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n= mat.size();
        map<int,int> mpp;
        for(int i = 0;i<n;i++){
            int cnt = 0;
            for(int j = 0;j<mat[i].size();j++){
                if(mat[i][j] == 1){
                    cnt += 1;
                    
                }
            }
            mpp[i] = cnt;
        }

        int ans = -1;
        int lar=-1;
        for(auto i:mpp){
            if(i.second > lar){
                ans = i.first;
                lar = i.second;
            }
        }

        return {ans,lar};
    }
};
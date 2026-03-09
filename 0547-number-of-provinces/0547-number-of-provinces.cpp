class Solution {
public:
    void dfs(int i, vector<bool>& vis, vector<vector<int>>& v){
        vis[i] = true;

        for(auto j: v[i]){
            if(!vis[j]){
                dfs(j, vis, v);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isc) {
        int n= isc.size();

        vector<vector<int>> v(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isc[i][j] == 1 && i!= j){
                    v[i].push_back(j);
                }
            }
        }

        vector<bool> vis(n, false);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;

                dfs(i, vis, v);
            }
        }
        return cnt;
    }
};
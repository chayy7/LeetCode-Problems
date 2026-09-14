class Solution {
public:
    void dfs(int i, map<int, vector<int>>& mpp, vector<int>& vis){
        vis[i] =1;

        for(auto j:mpp[i]){
            if(!vis[j]){
                vis[j] = 1;
                dfs(j, mpp, vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        map<int, vector<int>> mpp;
        for(int i=0;i<isConnected.size();i++){
            for(int j = 0;j<isConnected.size();j++){
                if(i != j && isConnected[i][j] == 1){
                    mpp[i+1].push_back(j+1);
                }
            }
        }

        for(auto i:mpp){
            cout << i.first << "->";
            for(auto j:i.second){
                cout  << j << " ";
            }
            cout << endl;
        }


        int n = isConnected.size();
        vector<int> vis(n+1, 0);
        

        int cnt = 0;

        for(int i =1;i<=n;i++){
            if(!vis[i]){
                cnt++;
                dfs(i, mpp, vis);
            }
        }

        return cnt;
    }
};
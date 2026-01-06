class Solution {
public:
    void bfs(map<int,vector<int>>& adj, vector<int>& vis, int i){
        queue<int> q;
        q.push(i);

        vis[i] = 1;
        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(auto i: adj[node]){
                if(!vis[i]){
                    vis[i] = 1;
                    q.push(i);
                }
            }
        }


    }
    int findCircleNum(vector<vector<int>>& isc) {
        int n=isc.size();
        map<int,vector<int>> adj;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i != j && isc[i][j]){
                    adj[i].push_back(j);
                }
            }
        }

        vector<int> vis(n,0);
        int cnt =0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                bfs(adj,vis,i);
            }
        }

        return cnt;



    }
};
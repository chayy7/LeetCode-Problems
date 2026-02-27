class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int dest) {
        map<int,vector<int>> mpp;
        for(int i=0;i<edges.size();i++){
            int u= edges[i][0];
            int v= edges[i][1];
            mpp[u].push_back(v);
            mpp[v].push_back(u);
        }



        queue<int> q;
        q.push(source);
        vector<int> vis(n, false);
        vis[source] = 1;
        while(!q.empty()){
            int front = q.front(); q.pop();
            if(front == dest){
                return true;
            }
            for(auto i: mpp[front]){
                if(!vis[i]){
                    vis[i] = 1;
                    q.push(i);
                }
            }
        }
        return false;
    }
};
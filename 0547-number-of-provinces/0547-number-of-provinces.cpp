class Solution {
public:

    void dfs(vector<vector<int>>& v,vector<int>& vis,int i){
        vis[i]=1;

        for(auto ii:v[i]){
            if(!vis[ii]){
                dfs(v,vis,ii);
            }
        }

    }
    int findCircleNum(vector<vector<int>>& isc) {
        int n=isc.size();
        vector<vector<int>> v(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && isc[i][j]){
                    v[i].push_back(j);
                }
            }
        }

        vector<int> vis(n,0);
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                dfs(v,vis,i);   

            }
        }


        return cnt;




    }
};
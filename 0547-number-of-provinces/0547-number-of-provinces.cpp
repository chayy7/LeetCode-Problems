class Solution {
public:
    void dfs(int i, map<int, vector<int>>& adj, vector<int>& freq){
        freq[i]= true;


        for(auto j:adj[i]){
            if(!freq[j]) dfs(j,adj,freq);
        }
    }
    int findCircleNum(vector<vector<int>>& isc) {
        int n = isc.size();
        

        int cnt = 0;

        map<int, vector<int>> adj;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(isc[i][j] == 1) {
                    adj[i+1].push_back(j+1);
                    adj[j+1].push_back(i+1);
                }
            }
        }

        vector<int> freq(n+1, false);
        int start = 1;
        // map<int, bool> visited;
        for(int i=1;i<=n;i++){
            if(!freq[i]){

                cnt++;
                dfs(i, adj, freq);
            }
        }

        // for(auto i:adj){
        //     cout << i.first << "->";
        //     for(auto j:i.second){
        //         cout << j << " ";
        //     }
        //     cout << endl;
        // }

       





        return cnt;

    }
};
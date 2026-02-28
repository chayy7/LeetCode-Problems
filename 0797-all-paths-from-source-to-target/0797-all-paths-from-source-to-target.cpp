class Solution {
public:
    void dfs(vector<vector<int>> graph, vector<vector<int>>& ans, int node, vector<int>& path, int n){
        path.push_back(node);

        if(node == n){
            ans.push_back(path);

        }else{
            for(auto i:graph[node]){
                dfs(graph, ans, i,path, n);
            }
        }

        path.pop_back();


    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        int n=graph.size()-1;
        
        vector<int> path;
        dfs(graph, ans, 0,path, n);

        return ans;
    }
};
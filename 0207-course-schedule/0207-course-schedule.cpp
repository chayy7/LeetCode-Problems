class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        map<int,vector<int>> mpp;

        vector<int> indegree(numCourses);
        for(auto i:prerequisites){
            mpp[i[0]].push_back(i[1]);
            indegree[i[1]]++;
        }

        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i] == 0) q.push(i);
        }

        vector<int> ans;
        while(!q.empty()){
            auto front = q.front(); q.pop();

            ans.push_back(front);

            for(auto i:mpp[front]){
                indegree[i]--;

                if(indegree[i] == 0){
                    q.push(i);
                }
            }
        }

        if(ans.size() == numCourses) return true;

        return false;
    }
};
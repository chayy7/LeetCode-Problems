class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int row = points.size();
        vector<pair<int,vector<int>>> dist;
        for (int i = 0; i < row; i++) {
            int origin = 0;
            int diff = pow(points[i][0] - origin, 2) + pow(points[i][1] - origin, 2);
            int distance = diff;
            dist.push_back({distance, points[i]});   
        }
        sort(dist.begin(), dist.end());
        vector<vector<int>>ans;
        for(int i=0;i<k;i++){
            ans.push_back(dist[i].second);
        }
        
        return ans;
        
        
    }
};
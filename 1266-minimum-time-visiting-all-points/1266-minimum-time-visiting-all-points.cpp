class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int row = points.size();
        int col = points[0].size();
        int cnt = 0;
        for (int i = 1; i < row; i++) {
                int x = abs(points[i][0] - points[i-1][0]);
                int y = abs(points[i][1] - points[i-1][1]);
                cnt += max(x, y);
        }
        return cnt;
    }
};
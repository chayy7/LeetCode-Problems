class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        // 2nd round of KUNAFA!
        if(c[0][0] == c[1][0]){
            for(int i=2;i<c.size();i++){
                if(c[i][0] != c[0][0]) return false;
            }
            return true;
        }
        
        

        int row = c.size();
        int col = c[0].size();
        int dx = c[1][0] - c[0][0];
        int dy = c[1][1] - c[0][1];
        double slope = (double)dy / dx;

        for (int i = 2; i < row; i++) {

            int cdx = c[i][0] - c[0][0];
            int cdy = c[i][1] - c[0][1];
            double currSlope = (double)cdy / cdx;

            if (slope != currSlope)
                return false;
        }

        return true;
    }
};
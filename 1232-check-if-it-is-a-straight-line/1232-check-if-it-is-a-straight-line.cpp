class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        if(c[0][0] == c[1][0]) {
            for (int i = 2; i < c.size(); i++) {
                if (c[i][0] != c[0][0])
                    return false;
            }
            return true;
        }

        double slope = (double)(c[1][1] - c[0][1]) / (c[1][0] - c[0][0]);

        for (int i = 2; i < c.size(); i++) {
            double curr = (double)(c[i][1] - c[0][1]) / (c[i][0] - c[0][0]);

            if (curr != slope){
                return false;
            }
        }

        return true;
    }
};
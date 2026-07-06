class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& i) {
        sort(i.begin(), i.end(), [](auto &a, auto &b){
            if(a[0] == b[0]){
                return a[1] > b[1];
            }

            return a[0] < b[0];
        });

        int maxi = 0;
        int cnt= 0;
        for(auto j:i){
            if(j[1] > maxi){
                cnt++;
                maxi = j[1];
            }
        }


        return cnt;

    }
};
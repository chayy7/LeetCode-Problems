class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0;
        for(auto i:accounts){
            int sum = 0;
            for(auto j:i){
                sum += j;
            }
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};
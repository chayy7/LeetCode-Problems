class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;

        map<int, int> mpp;
        for (auto i : nums) {
            mpp[i]++;
        }

        while (true) {
            vector<int> lvl;
            for (auto &i : mpp) {
                if (i.second >= 1) {
                    lvl.push_back(i.first);
                    i.second--;
                }
            }
            if (lvl.size() == 0)
                break;
            ans.push_back(lvl);
        }

        return ans;
    }
};
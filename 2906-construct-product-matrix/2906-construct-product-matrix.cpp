class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        vector<long long> nums;
        for (auto i : grid) {
            for (auto j : i) {
                nums.push_back(j);
            }
        }

        long long pref_prod = 1;
        vector<long long> pref;
        for (long long i = 0; i < nums.size(); i++) {
            pref.push_back((pref_prod * nums[i]) % 12345);
            pref_prod = (pref_prod * nums[i]) % 12345;
        }
        long long suf_prod = 1;
        vector<long long> suf;
        for (long long i = nums.size() - 1; i >= 0; i--) {
            suf.push_back(((suf_prod * nums[i])) % 12345);
            suf_prod = (suf_prod * nums[i] )% 12345;
        }
        reverse(suf.begin(), suf.end());
        vector<long long> ans;
        for (long long i = 0; i < nums.size(); i++) {
            if (i == 0) {
                ans.push_back(suf[i + 1] % 12345);
            } else if (i == nums.size() - 1) {
                ans.push_back(pref[i - 1] % 12345);
            } else {

                ans.push_back((pref[i - 1] * suf[i + 1]) % 12345);
            }
        }

        for (auto i : ans) {
            cout << i << " ";
        }
        long long row = grid.size();
        long long col = grid[0].size();
        long long iterator = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                grid[i][j] = ans[iterator++] % 12345;
            }
        }

        return grid;
    }
};
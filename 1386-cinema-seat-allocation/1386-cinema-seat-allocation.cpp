class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, int> mp;

        for (auto& x : reservedSeats)
            mp[x[0]] |= (1 << x[1]);

        int ans = (n - mp.size()) * 2;

        int left = (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5);
        int middle = (1 << 4) | (1 << 5) | (1 << 6) | (1 << 7);
        int right = (1 << 6) | (1 << 7) | (1 << 8) | (1 << 9);

        for (auto& [row, mask] : mp) {
            bool l = !(mask & left);
            bool m = !(mask & middle);
            bool r = !(mask & right);

            if (l && r)
                ans += 2;
            else if (l || m || r)
                ans++;
        }

        return ans;
    }
};
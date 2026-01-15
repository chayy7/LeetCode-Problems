class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        map<double, pair<int,int>> mp;

        int n = arr.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                double val = (double)arr[i] / arr[j];
                mp[val] = {arr[i], arr[j]};
            }
        }

        int cnt = 0;
        for (auto &it : mp) {
            cnt++;
            if (cnt == k) {
                return {it.second.first, it.second.second};
            }
        }

        return {};
    }
};

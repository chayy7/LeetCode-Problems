bool comp(pair<int, int>& a, pair<int, int>& b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> ans;

        vector<pair<int, int>> bitCout;
        for(auto i: arr){
            bitCout.push_back({i, __builtin_popcount(i)});
        }
        sort(bitCout.begin(), bitCout.end(), comp);

        for (auto i : bitCout) {
            ans.push_back(i.first);
        }

        return ans;
    }
};
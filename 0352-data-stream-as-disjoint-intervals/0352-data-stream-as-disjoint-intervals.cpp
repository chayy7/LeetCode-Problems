class SummaryRanges {
public:
    map<int, int> mp;

    SummaryRanges() {}

    void addNum(int value) {
        auto it = mp.upper_bound(value);

        if (it != mp.begin()) {
            auto prev = std::prev(it);

            if (prev->second >= value)
                return;

            if (prev->second + 1 == value) {
                prev->second = value;

                if (it != mp.end() && value + 1 >= it->first) {
                    prev->second = max(prev->second, it->second);
                    mp.erase(it);
                }

                return;
            }
        }

        if (it != mp.end() && value + 1 >= it->first) {
            int end = max(value, it->second);
            mp.erase(it);
            mp[value] = end;
        } else {
            mp[value] = value;
        }
    }

    vector<vector<int>> getIntervals() {
        vector<vector<int>> ans;

        for (auto it : mp) {
            ans.push_back({it.first, it.second});
        }

        return ans;
    }
};
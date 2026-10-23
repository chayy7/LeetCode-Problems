#include <bits/stdc++.h>
using namespace std;

class Solution {
    int chay, c1, c2, abc;
    vector<int> ghi;

    bool check_k(int k, const vector<int>& nums) {
        int lim = abc;
        for (int v = 0; v <= c1; ++v) {
            if (((v & k) != k) && ghi[v] != v) return false;
        }
        int sizeMask = 1 << c2;
        vector<int> ex_idx(sizeMask, -1);
        vector<char> exist(sizeMask, 0);
        for (int v = 0; v <= c1; ++v) {
            if ((v & k) == k) {
                int extra = (v & (~k)) & lim;
                exist[extra] = 1;
                ex_idx[extra] = ghi[v];
            }
        }
        vector<char> used(sizeMask, 0);
        for (int mask = 0; mask <= lim; ++mask) {
            if (!exist[mask] || used[mask]) continue;
            queue<int> q;
            vector<int> idxs;
            q.push(mask);
            used[mask] = 1;
            exist[mask] = 0;
            while (!q.empty()) {
                int cur = q.front(); q.pop();
                idxs.push_back(ex_idx[cur]);
                int comp = (~cur) & lim;
                for (int sub = comp; ; sub = (sub - 1) & comp) {
                    if (exist[sub]) {
                        used[sub] = 1;
                        exist[sub] = 0;
                        q.push(sub);
                    }
                    if (sub == 0) break;
                }
            }
            sort(idxs.begin(), idxs.end());
            vector<int> vals;
            vals.reserve(idxs.size());
            for (int id : idxs) vals.push_back(nums[id]);
            sort(vals.begin(), vals.end());
            if (idxs.size() != vals.size()) return false;
            for (int i = 0; i < (int)idxs.size(); ++i) {
                if (idxs[i] != vals[i]) return false;
            }
        }
        return true;
    }

public:
    int sortPermutation(vector<int>& nums) {
        chay = nums.size();
        if (is_sorted(nums.begin(), nums.end())) return 0;
        c1 = chay - 1;
        ghi.assign(c1 + 1, -1);
        for (int i = 0; i < chay; ++i) ghi[nums[i]] = i;
        c2 = 0;
        while ((1 << c2) <= c1) ++c2;
        abc = (1 << c2) - 1;
        int k = 0;
        for (int b = c2 - 1; b >= 0; --b) {
            int cand = k | (1 << b);
            if (check_k(cand, nums)) k = cand;
        }
        return k;
    }
};

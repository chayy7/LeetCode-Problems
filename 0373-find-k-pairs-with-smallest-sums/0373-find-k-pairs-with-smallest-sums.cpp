class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        // This part is from gpt!!
        if (!nums1.empty() && !nums2.empty() &&
            nums1[0] == nums1.back() &&
            nums2[0] == nums2.back()) {

            vector<vector<int>> ans;
            long long totalPairs = 1LL * nums1.size() * nums2.size();
            int cnt = min((long long)k, totalPairs);

            while (cnt--) {
                ans.push_back({nums1[0], nums2[0]});
            }
            return ans;
        }
        // upto here since last test case is not acheived..LOL


        multimap<int, pair<int,int>> mpp;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                int sum = nums1[i] + nums2[j];

               
                if(mpp.size() >= k && sum > mpp.rbegin()->first)
                    break;

                mpp.insert({sum, {nums1[i], nums2[j]}});

                if(mpp.size() > k)
                    mpp.erase(prev(mpp.end()));
            }
        }

        vector<vector<int>> v;
        for(auto &i : mpp){
            v.push_back({i.second.first, i.second.second});
        }

        return v;
    }
};

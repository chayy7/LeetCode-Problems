class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        map<int,int> mpp;
        for(auto i:nums) mpp[i]++;

        vector<int> ans;
        for(auto i:mpp){
            int cnt = 1;
            while(cnt <= k && i.second >= k){
                ans.push_back(i.first);
                cnt++;
            }
            while(i.second < k && i.second != 0){
                ans.push_back(i.first);
                i.second--;
            }
        }
        return ans;
    }
};
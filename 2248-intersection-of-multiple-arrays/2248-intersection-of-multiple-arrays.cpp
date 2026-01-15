class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int> ans;
        map<int, int> freq;
        for(auto i:nums){
            for(auto j:i){
                freq[j]++;
            }
        }
        for(auto &i: freq){
            if(i.second == n){
                ans.push_back(i.first);
            }
        }
        if(ans.size() == 0)return {};
        return ans;
    }
};
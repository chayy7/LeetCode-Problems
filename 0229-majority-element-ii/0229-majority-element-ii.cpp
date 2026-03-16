class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // next next
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int i: nums){
            mpp[i]++;
        }
        int n = nums.size();
        int critiria = n/3;
        for(auto &i : mpp){
            if(i.second > critiria){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
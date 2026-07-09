class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        map<int,int> mpp;
        for(auto i:nums) mpp[i]++;

        int c = nums.size()/2;
        return mpp[nums[c]] == 1;
    }
};
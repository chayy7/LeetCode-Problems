class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> v;
        for(auto i:nums){
            v.push_back(i);
        }
        reverse(nums.begin(), nums.end());
        for(auto i:nums){
            v.push_back(i);
        }

        return v;
    }
};
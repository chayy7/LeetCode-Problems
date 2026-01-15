class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> mpp;
        for(auto i:nums){
            for(auto j:i){
                mpp[j]++;
            }
        }

        vector<int> v;
        for(auto i:mpp){
            if(i.second == nums.size()) v.push_back(i.first);
        }

        return v;
    }
};
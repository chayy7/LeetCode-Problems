class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }

        vector<int> v;
        for(auto i:mpp){
            if(i.second >= 2) v.push_back(i.first);
        }

        return v;
    }
};
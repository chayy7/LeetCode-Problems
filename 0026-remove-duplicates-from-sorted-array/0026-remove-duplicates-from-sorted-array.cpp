class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        vector<int> v;
        for(auto i:mpp){
            v.push_back(i.first);
        }
        nums=v;
        return mpp.size();
    }
};
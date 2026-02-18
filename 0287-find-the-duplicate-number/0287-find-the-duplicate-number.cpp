class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> mpp;for(auto i:nums){mpp[i]++;};

        for(auto i:mpp){
            if(i.second >= 2) return i.first;
        }
        return -1;
    }
};
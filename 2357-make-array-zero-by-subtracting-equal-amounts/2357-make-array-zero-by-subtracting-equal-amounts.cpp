class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        map<int,int> mpp;
        for(auto i:nums){
            if(i == 0) continue;
            mpp[i]++;
        }

        return mpp.size();
    }
};
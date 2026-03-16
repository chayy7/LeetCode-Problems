class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        // 
        unordered_map<int,int> mpp;
        for(auto i: nums){
            mpp[i]++;
        }
        int n = nums.size();
        if(mpp.size() == n){
            return false;
        }
        return true;
    }
};
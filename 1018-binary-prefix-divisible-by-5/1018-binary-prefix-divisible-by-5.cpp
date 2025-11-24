class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> v;
        int c=0;
        for(int i = 0;i<nums.size();i++){
            c=(c*2+nums[i])%5;
            v.push_back(c==0);
        }
        return v;
    }
};
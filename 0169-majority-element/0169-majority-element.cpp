class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        int ans = 0;
        for(auto i:mpp){
            if(i.second > n/2) ans=i.first;
        }

        return ans;
    }
};
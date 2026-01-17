class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long> v;

        long long maxi  =0;
        for(long long i=0;i<nums.size();i++){
            maxi = max(maxi, (long long)nums[i]);
            v.push_back(nums[i] + maxi);
        }

 
        for(long long i= 1;i<v.size();i++){
            v[i] = v[i-1]+v[i];
        }

        return v;

    }
};
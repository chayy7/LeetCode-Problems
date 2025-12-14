class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n=nums.size();

        sort(nums.begin(),nums.end());
        int ssm=0;
        for(int i=0;i<k;i++){
            ssm += nums[i];
        }

        int lsm=0;
        for(int i=n-k;i<n;i++){
            lsm+= nums[i];
        }

        return abs(ssm-lsm);
    }
};
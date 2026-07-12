class Solution {
public:
    int func(int n, vector<int>& dp, vector<int> nums){
        if(n == 0){
            dp[n] = nums[n];
            return nums[n];
        }

        if(n < 0) return 0;

        if(dp[n] != -1 )return dp[n];

        int pick = nums[n] + func(n-2, dp, nums);
        int npick = func(n-1, dp, nums);

        return dp[n] = max(pick, npick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();

        vector<int> dp(n+1, -1);
        


        return func(n-1 , dp, nums);
    }
};
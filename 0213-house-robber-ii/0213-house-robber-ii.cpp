class Solution {
public:
    int amount(vector<int>& nums, int i, vector<int>& dp){
        if(i >= nums.size())return 0;
        if(dp[i] != -1)return dp[i];
        int take = nums[i] + amount(nums, i+2, dp);
        int skip = amount(nums, i+1,dp);
        return dp[i] = max(take,  skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int>v1(nums.begin(), nums.end()-1);
        vector<int> dp(v1.size(), -1);
        vector<int>v2(nums.begin()+1, nums.end());
        vector<int> dp1(v2.size(), -1);
        
        int a= amount(v1, 0, dp);
        int b= amount(v2, 0, dp1);
        return max(a,b);
    }
};
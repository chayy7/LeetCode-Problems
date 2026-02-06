class Solution {
public:
    int func(int n, vector<int>& dp, vector<int>& nums){
        if(n == 0) return nums[0];
        if(n < 0) return 0;

        if(dp[n] != -1) return dp[n];


        int p = nums[n] + func(n-2, dp, nums);
        int np = func(n-1, dp, nums);
        return dp[n] = max(p,np);
    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n == 1) return nums[0];
        vector<int> dp1(nums.begin(), nums.end()-1);
        vector<int> dp11(dp1.size(), -1);
        int a = func(dp1.size()-1, dp11, dp1);
        vector<int> dp2(nums.begin()+1, nums.end());
        vector<int> dp21(dp2.size(), -1);
        int b = func(dp2.size()-1, dp21, dp2);
        return max(a,b);
    }
};
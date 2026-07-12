class Solution {
public:
    int func(vector<int>& dp, vector<int> v, int n){
        if(n == 0){
            dp[n] = v[n];
            return v[n];
        }

        if(n < 0) return 0;


        if(dp[n] != -1) return dp[n];

        int pick = v[n]+ func(dp, v, n-2);
        int npick = func(dp, v, n-1);

        return dp[n] = max(pick, npick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();

         if (n == 1)
            return nums[0];

        vector<int> v1(nums.begin(), nums.end()-1);
        vector<int> v2(nums.begin()+1, nums.end());

        vector<int> dp1(v1.size(), -1);
        vector<int> dp2(v2.size(), -1);

        int func1 = func(dp1, v1, v1.size()-1);
        int func2 = func(dp2, v2, v2.size()-1);

        return max(func1, func2);
    }
};
class Solution {
public:
    int func(int n, vector<int>& dp1, vector<int>& dp11){
        if(n == 0) return dp11[n] = dp1[n];

        if(n < 0) return 0;
        if(dp11[n] != -1) return dp11[n];

        int pick = dp1[n] + func(n-2,dp1, dp11);
        int npick = 0 + func(n-1,dp1, dp11);

        return dp11[n] = max(pick,npick);
    }
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        if(n == 1) return nums[0];
        vector<int> dp1(nums.begin(), nums.end()-1);
        vector<int> dp11(dp1.size(), -1);
        int c = func(dp1.size()-1, dp1, dp11);
        vector<int> dp2(nums.begin()+1, nums.end());
        vector<int> dp21(dp2.size(), -1);
        int d = func(dp2.size()-1, dp2, dp21);
        
        return max(c,d);
    }
};
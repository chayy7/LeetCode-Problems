class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(auto i:nums){
            sum += i;
        }
        

        int ans = 0;
        int median = nums[n/2];
        for(auto i:nums){
            // cout << median- i<< endl;
            ans += abs(median- i);
        }
        return ans;
    }
};
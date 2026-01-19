class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEnd = nums[0];
        int minEnd = nums[0];
        int ans = nums[0];
        // int extMax = 1;
        // int extMin = 1;
        for(int i=1;i<nums.size();i++){
            int extMax = nums[i] * maxEnd;
            int extMin = nums[i] * minEnd;
            maxEnd = max(nums[i], max(extMax, extMin));
            minEnd = min(nums[i], min(extMax, extMin));
            ans = max(ans, maxEnd); 
        }
        return ans;
    }
};
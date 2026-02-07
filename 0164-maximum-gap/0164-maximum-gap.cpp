class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2)return 0;
        sort(nums.begin(), nums.end());
        int maxGap = INT_MIN;
        int left = 0, right = 1; 
        while(right < nums.size()){
            int gap = nums[right] - nums[left]; 
            maxGap = max(maxGap, gap);
            left++, right++;
        }
        return maxGap;
        
    }
};
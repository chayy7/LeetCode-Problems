class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int bit = 0; bit < 32; bit++) {
            int ones = 0;
            for (int i = 0; i < n; i++) {
                if (nums[i] & (1 << bit)) ones++;
            }
            sum += ones * (n - ones);
        }
        return sum;
    }
};

class Solution {
public:
    int countElements(vector<int>& nums) {
        if (nums.size() < 3) return 0;

        sort(nums.begin(), nums.end());

        int mn = nums.front();
        int mx = nums.back();

        int cnt = 0;
        for (int x : nums) {
            if (x > mn && x < mx)
                cnt++;
        }
        return cnt;
    }
};

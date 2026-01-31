class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int mn = nums[0];
        int mx = nums[nums.size()-1];
        int cnt =0;
        for(auto i:nums){
            if(i > mn && i<mx) cnt++;
        }

        return cnt;
    }
};

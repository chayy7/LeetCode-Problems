class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int l=0;
        int r = l+1;
        while(l<n || r<n){
            swap(nums[l],nums[r]);
            l+=2;
            r+=2;
        }

        return nums;
    }
};
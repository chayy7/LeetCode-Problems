class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        for(auto i : nums){
            cout << i << " ";
        }
        
        return nums[k-1];
    }
};
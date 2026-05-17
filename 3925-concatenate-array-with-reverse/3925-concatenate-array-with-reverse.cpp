class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans;
        for(auto i : nums){
            ans.push_back(i);
        }
        int ptr = nums.size() - 1;
        while(ptr >= 0){
            ans.push_back(nums[ptr]);
            ptr--;
        }
        return ans;
    }
};
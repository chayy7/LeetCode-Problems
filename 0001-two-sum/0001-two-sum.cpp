class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(int i=0;i<nums.size();i++){
            int left = target - nums[i];
            if(mpp.find(left) != mpp.end()){
                ans.push_back(mpp[left]);
                ans.push_back(i);
            }
            mpp[nums[i]] = i;
        }
        return ans;
    }
};
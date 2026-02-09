class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int len = nums.size();
        int max_elem = INT_MIN;
        int max_idx = 0;
        int min_elem = INT_MAX;
        int min_idx = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > max_elem){
                max_elem = nums[i];
                max_idx = i;
            }
            if(nums[i] < min_elem){
                min_elem = nums[i];
                min_idx = i;
            }
        }
        int front = max(min_idx, max_idx) + 1;
        int back = len - min(min_idx, max_idx);
        int mix = (min(min_idx, max_idx) + 1) + (len - max(min_idx, max_idx));
        return min({front, back, mix});
        
    }
};
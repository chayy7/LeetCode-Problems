class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0;
        int max_elem = *max_element(nums.begin(), nums.end());
        int min_elem = *min_element(nums.begin(), nums.end());
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i] > min_elem && nums[i] < max_elem){
                count++;
            }
        }
        return count;
    }
};
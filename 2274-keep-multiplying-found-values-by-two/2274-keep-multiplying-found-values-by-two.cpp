class Solution {
public:
    int findFinalValue(vector<int>& nums, int org) {
        int n = nums.size();
        int i = 0;
        while(i < n){
            if(nums[i] == org){
                org*= 2;
                i = 0;
            }else{
                i++;
            }
            
        }

        return org;
    }
};
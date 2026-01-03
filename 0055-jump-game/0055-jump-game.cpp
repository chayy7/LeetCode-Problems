class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxi = nums[0];
        for(int i=0;i<nums.size();i++){
            if(i>maxi){
                return false;
            }else{
                maxi = max(maxi, nums[i] + i);
            }
            
            if(maxi >= nums.size()) return true;
        }
        return true;
    }
};

/* index+nums[i] do */
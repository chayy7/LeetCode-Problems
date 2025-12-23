class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ts = 0;
        for(auto i:nums){
            ts += i;
        }

        int s = 0;
        for(int i=0;i<nums.size();i++){
            if(s == (ts-s-nums[i])){
                return i;
            }
            s += nums[i];
        }

        return -1;
    }
};
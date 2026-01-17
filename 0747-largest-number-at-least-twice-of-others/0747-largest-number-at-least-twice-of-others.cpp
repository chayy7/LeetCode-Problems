class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();

        int ans = -1;
        for(int i=0;i<n;i++){
            bool flag = true;
            for(int j=0;j<n;j++){
                if(i != j){
                    if(nums[i] < 2* nums[j]){
                        flag = false;
                        continue;
                    }
                }
            }
            if(flag) ans = i;
        }

        return ans;
    }
};
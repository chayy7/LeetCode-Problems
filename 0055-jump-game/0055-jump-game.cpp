class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxi = 0;
        for(int i=0;i<n;i++){
            int c = i+nums[i];
            if(i > maxi){
                return false;
            }
            maxi = max(maxi, c);

            if(maxi >= n) return true;
            


        }

        return true;
    }
};
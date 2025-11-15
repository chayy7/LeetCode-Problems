class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int l=0,r=0;
        int ml = 0;


        int zeroes = 0;
        while(r < n){
            if(nums[r] == 0){
                zeroes++;
            }

            if(zeroes > k){
                if(nums[l] == 0){
                    zeroes--;
                } 
                l++;
            }

            int len = r-l+1;
            ml=max(len,ml);

            r++;
        }

        return ml;


    }
};
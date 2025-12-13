class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty()) return {-1, -1};
        int n=nums.size();
        int l=0;
        int r= n-1;

        int lwr = -1;
        int upr = -1;

        while(l <= r){
            int mid = (l+r)/2;

            if(nums[mid] >= target){
                r = mid-1;
            }else if(nums[mid] < target){
                l=mid+1;
            } 
        }
        if(l == n || nums[l] != target){
            return {-1,-1};
        }
        lwr= l;

        cout << lwr;

        int l1=0;
        int r1 = n-1;
        while(l1 <= r1){
            int mid = (l1+r1)/2;
            if(nums[mid] > target){
                r1 = mid-1;
            }else if(nums[mid] <= target){
                l1 = mid+1;
            }
        }

        upr=r1;
        cout << upr;
        return {lwr,upr};

    }
};
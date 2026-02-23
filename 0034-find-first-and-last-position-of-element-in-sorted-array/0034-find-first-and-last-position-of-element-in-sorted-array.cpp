class Solution {
public:
    int fbs(vector<int>& nums, int target){
        int n=nums.size();

        int l=0, r=n-1;
        while(l <= r){
            int mid= l+(r-l)/2;
            if(target <= nums[mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return l;
    }
    int lbs(vector<int>& nums, int target){
        int n=nums.size();

        int l=0, r=n-1;
        while(l <= r){
            int mid= l+(r-l)/2;
            if(target < nums[mid]){
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return r;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int a= fbs(nums, target);
        int b= lbs(nums, target);

        if(a > b) return {-1,-1};
        return {a,b};
    }
};
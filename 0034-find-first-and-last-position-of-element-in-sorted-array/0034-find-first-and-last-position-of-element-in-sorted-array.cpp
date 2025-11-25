class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int n = nums.size();
        int l=0,r=n-1,fi=-1,la=-1;
        while(l <= r){
            int mid = l+(r-l)/2;
            if(nums[mid] == target){
                fi=mid;;
                r=mid-1;
            }else if(nums[mid] < target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        l=0,r=n-1;
        while(l <= r){
            int mid = l+(r-l)/2;
            if(nums[mid] == target){
                la=mid;
                l=mid+1;
            }else if(nums[mid] < target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        v.push_back(fi);
        v.push_back(la);
        return v;
    }
};
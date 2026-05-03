class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int cnt=0;
        map<int,int> mpp;
        mpp[0] = 1;

        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(mpp.find((sum-k))!= mpp.end() ){
                cnt+= mpp[sum-k];
            }

            mpp[sum] += 1; 
        }
        return cnt;
    }
};
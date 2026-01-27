class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> mpp;
        int sum = 0;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            mpp[sum]++;
            sum += nums[i];
            if(mpp.find(sum-k) != mpp.end()){
                cnt += mpp[sum-k];
            }
        }

        return cnt;
    }
};
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long ts=0;
        for(auto i:nums){
            ts += i;
        }

        long long s= 0;
        int cnt =0;
        for(long long i=0;i<n-1;i++){
            s += nums[i];
            if(s >= (ts-s)){
                cnt++;
            }
        }


        return cnt;
    }
};
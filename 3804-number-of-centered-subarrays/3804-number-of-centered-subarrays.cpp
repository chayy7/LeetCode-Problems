class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int n=nums.size();

        int cnt=0;
        for(int i=0;i<n;i++){
            int sumi=0;
            for(int j=i;j<n;j++){
                sumi += nums[j];
                for(int k=i;k<=j;k++){
                    if(nums[k] == sumi){
                        cnt++;
                        break;
                    }
                }
            }
        }

        return cnt;
    }
};
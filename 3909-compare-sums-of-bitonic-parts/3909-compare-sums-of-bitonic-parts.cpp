class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int peak = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > nums[peak]){
                peak = i;
            }
        }
        
        long long asc = 0;
        long long dec = 0;
        for(int i=0;i<=peak;i++){
            asc += nums[i];
        }
        for(int i=peak;i<nums.size();i++){
            dec += nums[i];
        }
        
        if(asc > dec) return 0;
        if(asc < dec) return 1;
        return -1;
        
    }
};
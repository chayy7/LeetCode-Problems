// #define long long int 
class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());

        long long ls = 0;
        long long rs = 0;
        int stop = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] != maxi){
                ls += nums[i];
            }else{
                ls += maxi;
                stop= i;
                break;
            }
        }
        for(int i=stop;i<nums.size();i++){
            if(nums[i] != maxi){
                rs += nums[i];
            }else{
                rs += maxi;
            }
        }
        if(ls > rs){
            return 0;
        }else if(ls < rs){
            return 1;
        }

        return -1;

    }
};
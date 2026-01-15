class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
                
        int maxi = INT_MIN;
        int st= -1;

        for(int i = 0; i < divisors.size(); i++){
            int cnt = 0;

            for(int j = 0; j < nums.size(); j++){
                if(nums[j] % divisors[i] == 0){
                    cnt++;
                }
            }

            if(maxi < cnt || (cnt == maxi && divisors[i] < st)){
                maxi=cnt;
                st=divisors[i];   
            }
        }

        return st;  
    }
};
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n =nums.size();
        
        int l=0;
        int r = 2;
        int cnt = 0;
        while(r < n){
            if(nums[l] == 0){
                for(int i=l;i<=r;i++){
                    if(nums[i] == 0){
                        nums[i] = 1;
                    }else{
                        nums[i] = 0;
                    }
                }
                
                cnt++;
            }
            l++;
            r++;

        }

        set<int> s(nums.begin(), nums.end());
        if(s.size() != 1){
            return -1;
        }

        return cnt;
    }
};
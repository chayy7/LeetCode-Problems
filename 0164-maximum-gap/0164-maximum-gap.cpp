class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n < 2) return 0;
        map<int,int> mpp;
        for(auto i:nums){
            mpp[i] = 1;
        }
        
        bool flag = false;
        int ans = 0;
        int p = 0;
        for(auto i:mpp){
            if(flag){
                ans = max(ans, i.first - p);
               
            }
            p = i.first;
            flag=true;
        }        
        return ans;
        
        
        
    }
};
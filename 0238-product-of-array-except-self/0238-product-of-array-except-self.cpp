class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int z=0;
        for(auto i:nums){
            if(i == 0){
                z++;
                continue;
            }
            p *= i;
        }      

        
        vector<int> ans;
        if(z > 1){
            for (auto i:nums) {
                ans.push_back(0);
            }
            return ans;
        }
        if(z == 1){
            for(auto i:nums){
                if(i == 0){
                    ans.push_back(p);
                }else{
                    ans.push_back(0);
                }
            }
        }else if(z == 0){
            for(auto i:nums){
                    ans.push_back(p/i);

            }
        }

        return ans;
        
    }
};
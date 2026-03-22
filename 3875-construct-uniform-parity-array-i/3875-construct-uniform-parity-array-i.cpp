class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n=nums1.size();

        vector<int> ans(n,1);

        bool even=true;
        for(auto i:nums1){
            if(i%2 != 0){
                even=false;
            }
        }
        if(even) return true;
        bool odd=true;
        for(auto i:nums1){
            if(i%2 == 0){
                odd=false;
            }
        }
        if(odd) return true;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums1[i] % 2 == 0){
                    if((nums1[i] - nums1[j]) % 2 != 0) ans[i] = nums1[i]-nums1[j];
                }
            }
        }

        bool a=true;
        for(auto i:ans){
            if(i%2 == 0){
                a=false;
            }
        }
        return a;

    }
};
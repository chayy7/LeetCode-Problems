class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>> v;
        int n=nums1.size();


        for(int i=0;i<n;i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i] % (nums2[j]*k) == 0){
                    v.push_back({i,j});
                }
            }
        }

        return v.size();
    }
};
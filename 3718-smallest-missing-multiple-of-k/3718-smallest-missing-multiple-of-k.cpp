class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int,int> mpp;
        for(auto i:nums) mpp[i]++;


        int i=1;
        int ans = 0;
        while(mpp.find(k*i) != mpp.end()){
            i++;
        }
        return k*i;
    }
};
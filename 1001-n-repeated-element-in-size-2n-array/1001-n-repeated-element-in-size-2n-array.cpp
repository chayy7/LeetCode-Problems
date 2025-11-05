class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }

        int n = nums.size()/2;
        int c = 0;
        for(auto i:mpp){
            if(i.second == n){
                c = i.first;
            }
        }

        return c;
    }
};
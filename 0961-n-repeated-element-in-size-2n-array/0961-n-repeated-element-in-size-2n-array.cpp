class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int c = nums.size()/2;
        map<int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }

        for(auto i:mpp){
            if(i.second == c){
                return i.first;
            }
        }

        return 0;
    }
};
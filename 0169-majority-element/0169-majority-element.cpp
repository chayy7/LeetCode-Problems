class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // next q
        unordered_map<int,int> mpp;
        for(auto i : nums){
            mpp[i]++;
        }
        int n = nums.size();
        int critiria = n / 2;
        for(auto &i : mpp){
            if(i.second > critiria){
                return i.first;
            }
        }
        return -1;
    }
};
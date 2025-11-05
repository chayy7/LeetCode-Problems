class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int c = n*(n+1)/2;
        map<int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        vector<int> v;
        for(auto i:mpp){
            if(i.second == 2){
                v.push_back(i.first);
            }
        }

        set<int> s(nums.begin(),nums.end());
        int sum = 0;
        for(auto i:s){
            sum += i;
        }

        int ts = c-sum;
        v.push_back(ts);
        return v;
    }
};
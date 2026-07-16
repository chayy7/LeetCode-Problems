class Solution {
public:
    long long findScore(vector<int>& nums) {
        vector<pair<int,int>> p;
        for(int i=0;i<nums.size();i++) p.push_back({nums[i], i});

        sort(p.begin(), p.end());

        vector<bool> v(nums.size(), false);

        long long ans = 0;

        for(auto i:p){
            int value=i.first;
            int index=i.second;

            if(v[index]) continue;

            ans += value;
            if(index >0 ) v[index-1] = true;
            if(index+1 < v.size() ) v[index+1] = true;
        }

        return ans;



    }
};
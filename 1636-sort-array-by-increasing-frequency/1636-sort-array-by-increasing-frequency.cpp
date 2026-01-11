class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }

        vector<pair<int,int>> v(mpp.begin(),mpp.end());

        sort(v.begin(), v.end(), [](auto &a, auto &b){
            if (a.second == b.second)
                return a.first > b.first; 
            return a.second < b.second;
        });
        
        vector<int> ans;
        for(auto &i:v){
            while(i.second > 0){
                ans.push_back(i.first);
                i.second--;
            }
                
        }

        return ans;
    }
};
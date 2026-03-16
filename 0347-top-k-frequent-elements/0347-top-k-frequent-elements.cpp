class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        while(k--){
            int maxFreq = 0;
            int maxElem = 0;
            for(auto &i: mpp){
                if(i.second > maxFreq){
                    maxFreq = i.second;
                    maxElem = i.first;
                }
            }
            //  next
            ans.push_back(maxElem); 
            mpp.erase(maxElem);
        }
        return ans;
    }
};
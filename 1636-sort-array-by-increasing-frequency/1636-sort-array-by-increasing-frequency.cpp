class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(auto i: nums){
            freq[i]++;
        }
        vector<int>ans;
        while(!freq.empty()){
            int min_freq = INT_MAX;
            int min_num = 0;
            for(auto &i: freq){
                if(i.second < min_freq || (i.second == min_freq && i.first > min_num)){
                    min_freq = i.second;
                    min_num = i.first;
                }
            }
            while(min_freq--){
                ans.push_back(min_num);
            }
            freq.erase(min_num);
        }
        return ans;
    }
};
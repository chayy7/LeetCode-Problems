class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        vector<string> ans;
        for(auto i: words){
            freq[i]++;
        }
        vector<pair<string,int>> v(freq.begin(),freq.end());
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            if (a.second == b.second)
                return a.first < b.first; 
            return a.second > b.second;
        });
        
        int cnt = 0;
        for(auto i: v){
            if(cnt < k){
                ans.push_back(i.first);
            }
            
            cnt++;
        }
        return ans;
        
    }
};
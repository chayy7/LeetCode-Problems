class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mpp;
        for(auto i:strs){
            string key= i;
            sort(key.begin(),key.end());
            mpp[key].push_back(i);
        }

        vector<vector<string>> v;
        for(auto i:mpp){
            v.push_back(i.second);
        }

        return v;
    }
};

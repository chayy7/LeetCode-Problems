class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0;

        for(auto i:words){
            if(i == s.substr(0, i.size())) cnt++;
        }
        return cnt;
    }
};
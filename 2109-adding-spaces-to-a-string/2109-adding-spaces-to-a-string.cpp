class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans = "";
        int ptr = 0;
        for(auto i: spaces){
            while(ptr < i){
                ans += s[ptr];
                ptr++;
            }
            ans += " ";
        }
        
        while(ptr<s.size()){
            ans += s[ptr++];
        }
        return ans;
    }
};
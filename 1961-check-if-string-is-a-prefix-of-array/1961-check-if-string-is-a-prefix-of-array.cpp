class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string curr = "";

        for(auto i:words){
            curr += i;
            if(curr == s) return true;

            // if(curr.size() > s.size()) return false;

        }

        return false;
    }
};
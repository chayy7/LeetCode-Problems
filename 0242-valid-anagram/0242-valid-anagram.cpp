class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();

        if(s.size() != t.size()) return false;

        map<char,int> mpp;
        for(auto i:s){
            mpp[i]++;
        }

        for(auto i:t){
            mpp[i]--;
        }

        for(auto i:mpp){
            if(i.second != 0) return false;
        }
        return true;
    }
};
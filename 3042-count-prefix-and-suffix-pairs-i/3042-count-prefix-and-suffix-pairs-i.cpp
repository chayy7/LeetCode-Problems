class Solution {
public:
    bool ps(string s1, string s2){
        if (s1.size() > s2.size()) return false;
        bool flag = true;
        for(int i=0;i<s1.size();i++){
            if(s1[i] != s2[i]) flag= false;
        }
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());

        for(int i=0;i<s1.size();i++){
            if(s1[i] != s2[i]) flag= false;
        }
        return flag;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt = 0;
        for(int i=0;i<words.size();i++){
            for(int j=i+1;j<words.size();j++){
                if(ps(words[i], words[j])) cnt++;

            }
        }

        return cnt;
    }
};
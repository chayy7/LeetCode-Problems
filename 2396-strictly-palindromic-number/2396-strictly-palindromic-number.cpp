class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<= n-2;i++){
            string s = bitset<32>(i).to_string();
            string ss = s.substr(s.find('1'));
            string revss = ss;
            reverse(revss.begin(), revss.end());
            if(ss != revss) return false;
        }

        return true;
    }
};
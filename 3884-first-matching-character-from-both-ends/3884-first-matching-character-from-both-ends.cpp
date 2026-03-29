class Solution {
public:
    int firstMatchingIndex(string s) {
        int l=0, r = s.size()-1;
        int ans = -1;
        while(l <= r){
            if(s[l] == s[r]){
                ans = l;
                break;
            }
            l++, r--;
        }

        return ans;
    }
};
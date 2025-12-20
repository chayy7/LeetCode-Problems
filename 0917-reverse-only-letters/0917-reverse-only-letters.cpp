class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.size();

        string ans ="";
        for(int i=0;i<n;i++){
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
                ans += s[i];
                s[i] = '\0';
            }
        }
        reverse(ans.begin(),ans.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i] == '\0'){
                s[i] = ans[j];
                j++;
            }
        }

        return s;
    }
};
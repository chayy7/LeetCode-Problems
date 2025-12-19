class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        
        string key="";

        for(int i=0;i<s.size();i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                key += s[i];
                s[i] = '\0';
            }
        }

        reverse(key.begin(),key.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i] == '\0'){
                s[i]=key[j];
                j++;
            }
        }
        return s;
    }
};
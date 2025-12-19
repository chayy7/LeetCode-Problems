class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();

        vector<int> upper(26,0);
        vector<int> lower(26,0);

        for(int i=0;i<s.size();i++){
            if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                int idx = s[i]-'A';
                upper[idx]++;
                s[i] = '#';
            }
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                int idx = s[i]-'a';
                lower[idx]++;
                s[i] = '#';
            }
        }

        string key="";
        for(int i=0;i<26;i++){
            char c= i+'A';
            for(int j=0;j<upper[i];j++){
                key += c;
            }
        }
        for(int i=0;i<26;i++){
            char c= i+'a';
            for(int j=0;j<lower[i];j++){
                key += c;
            }
        }


        int j=0;

        for(int i=0;i<s.size();i++){
            if(s[i] == '#'){
                s[i]=key[j];
                j++;
            }
        }

        return s;
    }
};

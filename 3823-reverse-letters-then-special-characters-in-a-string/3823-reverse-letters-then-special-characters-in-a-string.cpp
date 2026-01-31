class Solution {
public:
    string reverseByType(string s) {
        string sm = "";
        string sp = "";
        for(int i=0;i<s.size();i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                sm += s[i];
                s[i] = '%';
            }else{
                sp += s[i];
                s[i] = '@';
            }
        }
        
        reverse(sm.begin(), sm.end());
        reverse(sp.begin(), sp.end());

        int ptr=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '%'){
                s[i] = sm[ptr++];
            }
        }
        int ptr1=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '@'){
                s[i] = sp[ptr1++];
            }
        }

        return s;
    }
};
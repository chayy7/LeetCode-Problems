class Solution {
public:
    string reverseVowels(string s) {
        string v="";
        for(auto &i:s){
            if(i == 'A' || i == 'E' || i == 'I' ||  i == 'O' || i == 'U' || i == 'a' || i == 'e' || i == 'i' ||  i == 'o' || i == 'u'){
                
                v+=i;
                i= '#';
            }
        }
        // cout << v;


        // for(int i=0;i<s.size();i++){
        //     if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||  s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||  s[i] == 'o' || s[i] == 'u'){
        //         v += s[i];
        //         s[i] = '%';
        //     }
        // }
        reverse(v.begin(), v.end());
        cout << v;

        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '#'){
                s[i] = v[j++];
            }
        }
        return s;
    }
};
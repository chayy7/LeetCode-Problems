class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        cout << s;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty() && s[i] == ' '){
                continue;
            }else if(s[i] != ' '){
                st.push(s[i]);
            }else if(!st.empty() && s[i] == ' '){
                return st.size();
            }
        }

        return st.size();
    }
};
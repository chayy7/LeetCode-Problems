class Solution {
public: // chan
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for(int i=0;i<s.size();i++){
            if(s[i] == '#'){
                if(!st1.empty()){
                    st1.pop();
                }
            }else{
                st1.push(s[i]);
            }
        }
        for(int i=0;i<t.size();i++){
            if(t[i] == '#'){
                if(!st2.empty()){
                    st2.pop();
                }
            }else{
                st2.push(t[i]);
            }
        }
        string s_str = "";
        string t_str = "";
        while(!st1.empty()){
            s_str += st1.top();
            st1.pop();
        }
        while(!st2.empty()){
            t_str += st2.top();
            st2.pop();
        }
        
        return s_str == t_str;
    }
};
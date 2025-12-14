class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        for(int i=0;i<s.size();i++){
            if(s1.empty() && s[i] != '#'){
                s1.push(s[i]);
            }else if(s[i] == '#'){
                if(!s1.empty()){
                    s1.pop();
                }
            }else{
                s1.push(s[i]);
            }
            
        }
        stack<char> s2;
        for(int i=0;i<t.size();i++){
            if(s2.empty() && t[i] != '#'){
                s2.push(t[i]);
            }else if(t[i] == '#'){
                if(!s2.empty()){
                    s2.pop();
                }
            }else{
                s2.push(t[i]);
            }
            
        }

        if(s1.size() != s2.size()) return false;

        // int i=0;
        while(s1.size()){
            if(s1.top() != s2.top()){
                return false;
            }

            s1.pop();
            s2.pop();
            // i++;
        }

        return true;
    }
};
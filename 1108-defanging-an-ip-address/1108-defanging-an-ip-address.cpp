class Solution {
public:
    string defangIPaddr(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            
            if(s[i] == '.'){
                st.push('[');
                st.push(s[i]);
                st.push(']');
            }else{
                st.push(s[i]);
            }
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

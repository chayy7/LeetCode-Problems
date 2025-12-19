class Solution {
public:
    string defangIPaddr(string s) {
        stack<char> st; // stack 
        for(int i=0;i<s.size();i++){
            // push all the elements 
            // when '.' occurs push []
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
        // reverse the string
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

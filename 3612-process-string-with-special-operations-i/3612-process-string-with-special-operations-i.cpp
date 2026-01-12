class Solution {
public:
    string processStr(string s) {
        string ans = "";
        for (auto i : s) {
            if (isalpha(i)) {
                ans += i;
            } else if (i == '*') {
                if (!ans.empty()) {
                    ans.pop_back();
                }
            } else if (i == '#') {
                ans += ans;
            } else if (i == '%') {
                reverse(ans.begin(), ans.end());
            }
        }
        return ans;

// 

        // string ans="";
        // stack<char> st;
        // for(int i=0;i<s.size();i++){
        //     if(s[i] == '*'){
        //         if(!st.empty()) st.pop();
        //     }else if(s[i] == '#'){
        //         stack<char> temp;
        //         while(!st.empty()){
        //             temp.push(st.top());
        //             st.pop();
        //         }

        //         while(!temp)
        //     }else if(s[i] == '%'){

        //     }else{

        //     }
        // }

    }
};
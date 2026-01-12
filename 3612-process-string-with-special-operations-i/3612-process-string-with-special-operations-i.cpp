class Solution {
public:
    string processStr(string s) {
        // string ans = "";
        // for (auto i : s) {
        //     if (isalpha(i)) {
        //         ans += i;
        //     } else if (i == '*') {
        //         if (!ans.empty()) {
        //             ans.pop_back();
        //         }
        //     } else if (i == '#') {
        //         ans += ans;
        //     } else if (i == '%') {
        //         reverse(ans.begin(), ans.end());
        //     }
        // }
        // return ans;

        stack<char> st;
        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '*') {
                if (!st.empty())
                    st.pop();
            } else if (s[i] == '#') {
                stack<char> temp;
                vector<char> seq;
                while (!st.empty()) {
                    seq.push_back(st.top());
                    temp.push(st.top());
                    st.pop();
                }

                while (!temp.empty()) {
                    st.push(temp.top());
                    temp.pop();
                }


                for (int j = seq.size() - 1; j >= 0; j--) {
                    st.push(seq[j]);
                }
            } else if (s[i] == '%') {
                stack<char> temp;
                while (!st.empty()) {
                    temp.push(st.top());
                    st.pop();
                }

                st = temp;
            } else {
                st.push(s[i]);
            }
        }

        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
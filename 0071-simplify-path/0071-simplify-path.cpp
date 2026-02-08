class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string word;
        stack<string> st;

        while (getline(ss, word, '/')) {
            if (word == "" || word == ".") {
                continue;
            }
            else if (word == "..") {
                if (!st.empty()) st.pop();
            }
            else {
                st.push(word);
            }
        }

        stack<string> rev;
        while (!st.empty()) {
            rev.push(st.top());
            st.pop();
        }

        string res = "";
        while (!rev.empty()) {
            res += "/" + rev.top();
            rev.pop();
        }

        return res.empty() ? "/" : res;
    }
};

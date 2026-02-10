class Solution {
public:
    void func(int n, vector<string>& ans, int open, int close,string curr){
        if(curr.size() == 2*n){
            ans.push_back(curr);
            return;
        }

        if(open < n){
            func(n, ans, open+1, close, curr+'(');
        }

        if(close < open){
            func(n, ans, open, close+1, curr+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open =0;
        int close = 0;
        string curr = "";
        func(n , ans, open, close, curr);
        return ans;
    }
};
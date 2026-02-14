class Solution {
public:
    void gen(int n, string curr, vector<string>& ans, int open, int close){
        if(curr.size() == 2*n){
            ans.push_back(curr);
            return;
        }
        if(open < n){
            gen(n, curr+'(', ans, open+1, close);
            
        }
        if(close < open){
            gen(n, curr+')', ans, open, close+1); 
        }        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr = "";
        int open = 0;
        int close = 0;
        gen(n, curr, ans, open, close);
        return ans;
    }
};
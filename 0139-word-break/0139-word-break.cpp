class Solution {
public:

    bool search(string part, vector<string>& wordDict){

        for(auto i : wordDict){

            if(i == part){
                return true;
            }
        }

        return false;
    }


    bool solve(string s, vector<string>& wordDict,
               vector<int>& dp){

        int n = s.size();

        if(n == 0) return true;


        if(dp[n] != -1) return dp[n];

        for(int i = 1; i <= n; i++){

            string firstpart = s.substr(0, i);
            string lastpart = s.substr(i);

            if(search(firstpart, wordDict) &&
               solve(lastpart, wordDict, dp)) {

                return dp[n] = true;
            }
        }

        return dp[n] = false;
    }


    bool wordBreak(string s, vector<string>& wordDict) {

        vector<int> dp(s.size() + 1, -1);

        return solve(s, wordDict, dp);
    }
};
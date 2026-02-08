class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) return {};

        map<int, string> mpp;
        mpp[2] = "abc";
        mpp[3] = "def";
        mpp[4] = "ghi";
        mpp[5] = "jkl";
        mpp[6] = "mno";
        mpp[7] = "pqrs";
        mpp[8] = "tuv";
        mpp[9] = "wxyz";

        vector<string> ans;
        ans.push_back(""); 
        for (char d : digits) {
            int num = d - '0';
            string letters = mpp[num];

            vector<string> temp;
            for (string s : ans) {
                for (char ch : letters) {
                    temp.push_back(s + ch);
                }
            }
            ans = temp;
        }

        return ans;
    }
};

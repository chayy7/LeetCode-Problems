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

        for(auto i:digits){
            int num = i-'0';
            string str= mpp[num];
            vector<string> temp;
            for(auto j:ans){
                for(auto k: str){
                    temp.push_back(j+k);
                }
            }
            ans = temp;
        }
        return ans;
    }
};

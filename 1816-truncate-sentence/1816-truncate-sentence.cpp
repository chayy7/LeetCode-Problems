class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream ss(s);
        string word;
        int cnt = 0;
        string ans = "";
        while(ss >> word){
            cnt++;
            if(cnt < k) ans += word+" ";
            if(cnt == k){
                ans += word;
            }
        }

        return ans;
    }
};
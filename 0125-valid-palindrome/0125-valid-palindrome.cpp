class Solution {
public:
    bool isPalindrome(string s) {
        for(auto &i:s){
            i = tolower(i);
        }

        string ans = "";
        for(auto i:s){
            if(isalnum(i)){
                ans += i;
            }
        }

        string s1= ans;
        reverse(s1.begin(), s1.end());

        return s1==ans;
    }
};
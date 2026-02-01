class Solution {
public:
    string baseCnv(int n, int base){
        string temp  = "";
        while(n > 0){
            int rem = n % base;
            temp += char('0' - rem);
            n /= base;
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<=n-2;i++){
            string str = baseCnv(n, i);
            string rev_str = str;
            reverse(rev_str.begin(), rev_str.end());
            if(str != rev_str){
                return false;
            }
        }
        return true;
    }
};
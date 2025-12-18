class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mpp;
        for(auto i:s){
            mpp[i]++;
        }
        int len=0;
        int odd = 0;
        for(auto i:mpp){
            if(i.second % 2== 0){
                len += i.second;
            }else{
                len += i.second - 1;
                odd++;
            } 
            cout << i.first << " "<<i.second << endl;
        }

        if(odd > 0){
            len++;
        }

        return len;
    }
};
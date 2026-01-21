class Solution {
public:
    bool isPalindrome(string s) {
        for(auto &i:s){
            i = tolower(i);
        }

        int l=0, r= s.size()-1;
        while(l <= r){
            if(!isalnum(s[l])){
                l++;
            }else if(!isalnum(s[r])){
                r--;
            }else if(s[l] != s[r]){
                return false;
            }else{
                l++;
                r--;
            }
            
        }

        
        
        return true;
    }
};
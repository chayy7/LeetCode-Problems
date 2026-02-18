class Solution {
public:
    bool hasAlternatingBits(int n) {
        int ch=-1;
        while(n > 0){
            int rem = n%2;
            if(ch == rem){
                return false;
            }
            ch=rem;
            n /= 2;
        }
        return true;
    }
};
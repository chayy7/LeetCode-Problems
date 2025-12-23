class Solution {
public:
    long long removeZeros(long long n) {
        long long ans =0 ;
        while(n > 0){
            int rem = n%10;
            if(rem != 0){
                ans = ans*10+rem;
            }
            n /= 10;
        }

        long long rev = 0;
        while(ans > 0){
            int rem = ans%10;
            rev = rev*10+rem;
            ans /= 10;
        }

        return rev;
    }
};
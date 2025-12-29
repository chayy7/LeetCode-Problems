class Solution {
public:
    int reverse(int x) {
        int o= x;
        long long  rev = 0;
        while(o != 0){
            int rem = o%10;
            rev = rev*10+rem;
            o /= 10;
        }

        if(rev < INT_MIN || rev> INT_MAX) return 0;

        return (int)rev;
    }
};
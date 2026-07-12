class Solution {
public:
    bool isPrime(int n){
        if(n < 2) return false;
        for(int i = 2;i*i <= n;i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    int revNum(int n){
        int ans = 0;
        while(n > 0){
            int dig = n % 10;
            ans = (ans * 10) + dig;
            n /= 10;
        }
        return ans;
    }
    int sumOfPrimesInRange(int n) {
        int rev = revNum(n);
        int st = min(n, rev);
        int end = max(n, rev);
        int ans = 0;
        
        for(int i=st;i<=end;i++){
            if(isPrime(i)){
                ans += i;
            }
        }
        return ans;
    }
};
class Solution {
public:
    bool isprime(int n){
        if(n < 2) return false;
        if(n == 2) return true;
        if(n % 2 == 0) return false;
        
        for(int i=3;i*i<=n;i+=2){
            if(n%i == 0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int cnt=0;
        for(int i=left; i<=right;i++){
            if(isprime(__builtin_popcount(i))){
                cnt++;
            }
        }
        return cnt;
    }
};
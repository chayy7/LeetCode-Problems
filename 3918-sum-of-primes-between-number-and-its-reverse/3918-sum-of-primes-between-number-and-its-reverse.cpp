class Solution {
public:
    bool isprime(int n){
        if(n <= 1) return false;
        if(n == 2) return true;
        if(n %2 == 0) return false;

        for(int i=3;i*i<=n;i+=2){
            if(n%i ==0) return false;
        }

        return true;
    }
    int sumOfPrimesInRange(int n) {
        int rev = 0;
        int o=n;
        while(o > 0){
            int rem = o%10;
            rev = rev*10+rem;
            o/=10;
        }
        
        int mini = min(n,rev);
        int maxi= max(n,rev);

        int sum  =0;
        for(int i=mini;i<=maxi;i++){
            if(isprime(i)){
                sum += i;
            }
        }

        return sum;
    }
};
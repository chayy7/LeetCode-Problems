class Solution {
public:
    int count_bits(int n){
        int count = 0;
        while(n > 0){
            count += n & 1;
            n = n >> 1;
        }
        return count;
    }
    
    bool isPrime(int n){
        if(n <= 1)return false;
        if(n == 2)return true;
        if(n % 2 == 0) return false;
        for(int i=3;i*i <= n;i+=2){
            if(n % i == 0)return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i=left;i<=right;i++){            
            int bit_count = __builtin_popcount(i);
            cout << bit_count << endl;
            if(isPrime(bit_count)){
                count++;
            }
        }
        return count;
        
    }
};
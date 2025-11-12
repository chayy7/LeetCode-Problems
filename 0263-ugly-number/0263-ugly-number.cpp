class Solution {
public:

    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
    bool isUgly(int n) {
        if (n <= 0) return false;
        vector<int> v;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                if (isPrime(i)) v.push_back(i);
                int other = n / i;
                if (other != i && isPrime(other)) v.push_back(other);
            }
        }
        if (isPrime(n)) v.push_back(n);
        for(auto i: v){
            if(i > 5){
                return false;
            }
            // continue;
        }
        return true;
    }
};
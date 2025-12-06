class Solution {
public:
    bool isPrime(int n){
        if(n <= 1) return false;
        if(n == 2) return true;        
        if(n % 2 == 0) return false;   
        for(int i = 3; i * i <= n; i += 2){
            if(n % i == 0) return false;
        }
        return true;
    }

    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> result;
        for(int j = 1;j<=n/2;j++){
            if(isPrime(j) && isPrime(n - j)){
                result.push_back({j, n-j}); 
            }
        }
        return result;
        
    }
};

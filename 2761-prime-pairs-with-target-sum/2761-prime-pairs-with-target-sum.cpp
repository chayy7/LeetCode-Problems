class Solution {
public:

    bool isprime(int n){
        if(n <= 1) return false;
        if(n == 2) return true;        
        if(n % 2 == 0) return false;   
        for(int i = 3; i * i <= n; i += 2){
            if(n % i == 0) return false;
        }
        return true;
    }


    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> v;
        for(int i = 2;i<=n/2;i++){
            // vector<int> vv;
            int j=n-i;
                if(isprime(i) && isprime(j) ){
                    v.push_back({i,j});
                }
            
            // v.push_back(vv);
        }
        return v;
    }
};
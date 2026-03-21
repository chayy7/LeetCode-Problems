class Solution {
public:
    int totalMoney(int n) {
        if(n <= 7){
            return n * (n + 1) / 2;
        }
        int days7 = n / 7;
        int remDays = n % 7;
        int ans = 0;
        for(int i = 0; i<days7;i++){
            ans += 28 + (i * 7);
        }
        for(int i=1;i<=remDays;i++){
            ans += days7 + i;
        }
        
        return ans;
    }
};
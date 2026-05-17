class Solution {
public:
    int getLarge(int n){
        if(n <= 9){
            return n;
        }
        int len = log10(n) + 1;
        int max_n = INT_MIN;
        while(n > 0){
            int last = n % 10;
            max_n = max(max_n, last);
            n /= 10;
        }
        int new_num = 0;
        while(len--){
            new_num = (new_num * 10) + max_n;
        }
        return new_num;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(auto i: nums){
            sum += getLarge(i);
        }
        return sum;  
    }
};
class Solution {
public:
    int maxi(int n){
        int maxi = INT_MIN;
        int o=n;
        while(n > 0){
            maxi = max(maxi, n%10);
            n /= 10;

        }
        return maxi;
    }
    int rpl(int maxi, int n){
        int size = log10(n)+1;
        int num = 0;
        while(size){
            num = num*10 + maxi;
            size--;
        }
        return num;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(auto i: nums){
            sum += rpl(maxi(i), i);
        }
        return sum;
    }
};
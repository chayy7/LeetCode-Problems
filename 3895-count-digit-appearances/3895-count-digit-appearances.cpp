class Solution {
public:
    int count(int n,int digit){
        int c =0;
        while(n > 0){
            int rem = n%10;
            if(rem == digit) c++;
            n/=10;
        }
        return c;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt = 0;
        for(auto i:nums){
            cnt += count(i,digit);
        }
        return cnt;
    }
};
class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int> mpp;
        while(n > 0){
            int rem = n%10;
            mpp[rem]++;
            n /= 10;
        }

        int sum = 0;
        for(auto i:mpp){
            sum += i.first * i.second;
        }
        return sum;
    }
};
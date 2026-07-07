class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;

        long long num = 0;
        long long p=1;
        while(n > 0){
            long long rem = n%10;
            if(rem != 0){
                sum += rem;
                num = rem*p+num;
                p *= 10;
            }

            n/=10;
        }
        cout << num << " "<<sum;
        return num*sum;
    }
};
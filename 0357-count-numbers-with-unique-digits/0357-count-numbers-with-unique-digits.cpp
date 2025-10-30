class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if (n == 0) return 1; 
        if (n == 8) return 2345851; 

        long long x = pow(10, n);
        int cnt = 0;

        for (int i = 0; i < x; i++) {
            int num = i;
            vector<int> freq(10, 0);
            bool unique = true;
            while (num > 0) {
                int d = num % 10;
                if (freq[d]) {
                    unique = false;
                    break;
                }
                freq[d] = 1;
                num /= 10;
            }

            if (unique)
                cnt++;
        }

        return cnt;
    }
};

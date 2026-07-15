class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        if(n <= 0) return 0;
        int odd = 1;
        int even = 2;
        int prevOdd = 1;
        int prevEven = 2;
        n--;
        while(n > 0){
            prevOdd += 2;
            prevEven += 2;
            odd += prevOdd;
            even += prevEven;
            n--;
        }
        cout << odd << " " << even;
 
        return __gcd(even,odd);
    }
};
class Solution {
public:
    int getSum(int a, int b) {
        while(b != 0) {
            int x = a;
            a = a^b;
            b = (x&b) << 1;            
        }
        return a;
    }
};
class Solution {
public:
    int prod(int n){
        int p = 1;
        while(n > 0){
            p *= n%10;
            n /= 10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        while(prod(n) % t != 0){
            n++;
        }
        return n;
    }
};
class Solution {
public:
    bool checkGoodInteger(int n) {
        int ds = 0;
        int ss = 0;
        while(n > 0){
            ds += n%10;
            ss += pow((n%10),2);
            n /= 10;
        }

        return ss-ds>= 50 ? true:false;
    }
};
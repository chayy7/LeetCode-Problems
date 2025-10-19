class Solution {
public:
    bool judgeSquareSum(int c) {
        

        for(long long i = 0;i*i<=c;i++){

            long long b = sqrt(c-(i*i));
            if(((i*i)+b*b)== c){
                return true;
            }
        }
        return false;
    }
};
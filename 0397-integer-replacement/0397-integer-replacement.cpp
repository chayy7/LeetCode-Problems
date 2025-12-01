class Solution {
public:
    int integerReplacement(int n) {
        long long cnt=0;

        long long o=n;
        while(o != 1){
            if(o % 2 == 0){
                o /= 2;
                cnt+=1;

            }else{
                if(o == 3) {
                    o -= 1;
                    cnt += 1;
                } else if((o + 1) % 4 == 0) {
                    o += 1;
                    cnt += 1;
                } else {
                    o -= 1;
                    cnt += 1;
                }

            }
        }

        return cnt;
    }
};
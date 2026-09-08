class Solution {
public:
    int countCommas(int n) {
        int len = int(log10(n))+1;

        int cnt = 0;
       for(int i =1000; i<= n;i++){
            cnt++;
       }
        return cnt;
    }
};
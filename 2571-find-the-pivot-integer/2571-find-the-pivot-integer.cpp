class Solution {
public:
    int pivotInteger(int n) {
        for(int i = 1;i<=n;i++){
            int ls = i*(i+1)/2;
            int rs = 0;
            for(int j=i;j<=n;j++){
                rs += j;
            }
            if(ls == rs) return i;
        }
        return -1;
    }
};
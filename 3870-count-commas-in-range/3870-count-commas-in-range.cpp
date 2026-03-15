class Solution {
public:
    int countCommas(int n) {
        int cnt = 0;
        for(int i=1000;i <= n;i++){
            string s=to_string(i);
            cnt += (s.size()-1)/3;
        }
        return cnt;
    }
};
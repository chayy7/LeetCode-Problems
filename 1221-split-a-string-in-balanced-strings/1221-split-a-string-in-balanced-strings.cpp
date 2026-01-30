class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.size();

        int l =0, r= 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s[i] == 'R'){
                r++;
            }else if(s[i] == 'L'){
                l++;
            }

            if(l == r){
                ans++;
            }
        }

        return ans;
    }
};
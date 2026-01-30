class Solution {
public:
    int maxFreqSum(string s) {
        int hash[26] = {0};
        int n=s.size();

        int vcnt =0;
        int ccnt= 0;
        for(int i=0;i<n;i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                hash[(s[i] -'a' + 26) % 26]++;
                vcnt = max(vcnt, hash[s[i]-'a']);
            }else{
                hash[(s[i] -'a' + 26) % 26]++;
                ccnt = max(ccnt, hash[s[i]-'a']);

            }
        }

        return vcnt+ccnt;

    }
};
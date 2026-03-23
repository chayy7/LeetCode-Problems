class Solution {
public:
    int minChanges(int n, int k) {
        string s1 = bitset<32>(n).to_string();
        reverse(s1.begin(), s1.end());
        string s2 = bitset<32>(k).to_string();
        reverse(s2.begin(), s2.end());
        cout << s1 << " " << s2;
        int cnt=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i] == '1' && s2[i] == '0'){
                cnt++;
            }else if(s1[i] == '0' && s2[i] == '1'){
                return -1;
            }
        }
        return cnt;
    }
};
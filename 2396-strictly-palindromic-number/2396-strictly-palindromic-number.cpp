class Solution {
public:
    string baseconv(int n, int i){
        string ans = "";
        while(n > 0){
            ans += to_string(n%i);
            n /= i;
        }

        return ans;
    }
    bool isStrictlyPalindromic(int n) {
        for(int i=2;i<= n-2;i++){
            string s = bitset<32>(i).to_string();
            string ss = s.substr(s.find('1'));
            string revss = baseconv(n, i);
            if(ss != revss) return false;
            cout << baseconv(n,i ) << endl;
        }

        return true;
    }
};
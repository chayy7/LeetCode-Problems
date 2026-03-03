class Solution {
public:

    string toggle(string s){
        for(int i = 0; i < s.size(); i++){
            s[i] ^= 1;
        }
        return s;
    }

    string reverseStr(string s){
        int l = 0, r = s.size() - 1;
        while(l < r){
            swap(s[l], s[r]);
            l++;
            r--;
        }
        return s;
    }

    char findKthBit(int n, int k) {

        string s = "0";
        
        for(int i = 2; i <= n; i++){
            string temp = toggle(s);
            temp = reverseStr(temp);
            s = s + "1" + temp;
        }

        return s[k - 1];
    }
};
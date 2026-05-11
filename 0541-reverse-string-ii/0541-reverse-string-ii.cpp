class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size() < k){
            reverse(s.begin(), s.end());
            return s;
        }
        int i=0, j= k-1;
        while(i < s.size()){
            if(j >= s.size()) {
                reverse(s.begin() + i, s.end());
                break;
            }
            reverse(s.begin()+i, s.begin()+j+1);

            i += 2*k;
            j += 2*k;
        }

        return s;
    }
};
class Solution {
public:
    int reverseBits(int n) {
        string s = bitset<32>(n).to_string();
        reverse(s.begin(), s.end());
        int ans = 0;

        for(auto i:s){
            ans = ans * 2+(i-'0');
        }

        return ans;
    }
};
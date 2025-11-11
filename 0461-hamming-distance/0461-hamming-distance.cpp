class Solution {
public:
    int hammingDistance(int x, int y) {
        int c= x^y;
        string s= bitset<32>(c).to_string();
        int res = count(s.begin(),s.end(),'1');

        return res;
    }
};
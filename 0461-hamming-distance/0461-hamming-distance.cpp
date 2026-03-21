class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorNums = x ^ y;
        int ans = __builtin_popcount(xorNums);
        return ans;
    }
};
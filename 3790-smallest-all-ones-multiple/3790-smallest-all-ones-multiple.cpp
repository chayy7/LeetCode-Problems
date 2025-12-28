class Solution {
public:
    int minAllOneMultiple(int k) {
        if (k % 2 == 0 || k % 5 == 0) return -1;

        int re = 1 % k;
        int len = 1;

        while (re != 0) {
            re = (re * 10 + 1) % k;
            len++;
        }

        return len;
    }
};

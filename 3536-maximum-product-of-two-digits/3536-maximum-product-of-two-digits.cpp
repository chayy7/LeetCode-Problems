class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        while(n > 0){
            arr.push_back(n%10);
            n /= 10;
        }

        int first = -1, second = -1;

        for (int d : arr) {
            if (d >= first) {
                second = first;
                first = d;
            } else if (d > second) {
                second = d;
            }
        }

        return first * second;
    }
};
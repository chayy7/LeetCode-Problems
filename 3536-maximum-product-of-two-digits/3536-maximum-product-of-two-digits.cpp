class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        while(n > 0){
            arr.push_back(n%10);
            n /= 10;
        }

        sort(arr.begin(), arr.end());
        int prod = 1;
        prod *= arr[arr.size()-1]* arr[arr.size()-2];

        return prod;
    }
};
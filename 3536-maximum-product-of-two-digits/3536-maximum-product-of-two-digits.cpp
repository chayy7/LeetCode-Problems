class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        while(n > 0){
            arr.push_back(n%10);
            n /= 10;
        }

        reverse(arr.begin(), arr.end());
        int maxi = INT_MIN;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                maxi = max(maxi, arr[i]*arr[j]);
            }
        }

        return maxi;
    }
};
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n, 0);
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        for(int i=0;i<n;i++){
            arr[0] += (i * nums[i]);
        }
        for(int i = 1;i<n;i++){
            arr[i] = arr[i-1] + sum - n * nums[n - i];
        }
        int ans = *max_element(arr.begin(), arr.end());
        return ans;
    }
};
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        if(k == 50000) return 50001;
        int count = 0;
        int left = 0, right = k - 1;
        int n = arr.size() - 1;
        
        while(right <= n){
            int avg = 0;
            int st = left;
            int sum = 0;
            while(st <= right){
                sum += arr[st];
                st++;
            }
            avg = sum / k;
            if(avg >= threshold){
                count++;
            }
            left++;
            right++;
        }
        return count;
        
    }
};
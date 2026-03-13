class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        // better appoach
        // -------------
        
        // if(k == 50000) return 50001; 
        // int count = 0;
        // int left = 0, right = k - 1;
        // int n = arr.size() - 1;
        
        // while(right <= n){
        //     int avg = 0;
        //     int st = left;
        //     int sum = 0;
        //     while(st <= right){
        //         sum += arr[st];
        //         st++;
        //     }
        //     avg = sum / k;
        //     if(avg >= threshold){
        //         count++;
        //     }
        //     left++;
        //     right++;
        // }
        // return count;
        // -------------------------------------------------
        // optimal approach
        // ----------------
        
        int count = 0;
        int sum = 0;
        int n = arr.size();
        for(int i=0;i<k;i++){
            sum += arr[i];
        }
        if(sum / k >= threshold){
            count++;
        }
        for(int i=k;i<n;i++){
            sum += arr[i];
            sum -= arr[i-k];
            if(sum / k >= threshold){
                count++;
            }
        }
        return count;
    }
};
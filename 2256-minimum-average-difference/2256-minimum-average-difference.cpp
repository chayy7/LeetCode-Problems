class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return 0;
        long long sum = accumulate(nums.begin(), nums.end(), 0LL);

        vector<long long> v;
        long long  a = 0;
        for(int i=0;i<n;i++){
            a += (nums[i]) ;
            long long b = (i == n-1) ? 0 : b = (sum - a)/(n-i-1);
            v.push_back(abs((a/ (i+1)) - b));
        }

        long long mini = *min_element(v.begin(), v.end());
        int idx = INT_MAX;
        for(int i=0;i<n;i++){
            if(v[i] == mini){
                idx= min(idx, i);
            }
        }


        return idx;
    }
};
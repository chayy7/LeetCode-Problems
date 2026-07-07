class Solution {
public:
    int big(int n){
        int maxi = -1;
        while(n > 0){
            maxi = max(maxi, n%10);
            n /= 10;
        }
        return maxi;
    }
    int small(int n){
        int mini = INT_MAX;
        while(n > 0){
            mini = min(mini, n%10);
            n /= 10;
        }
        return mini;
    }
    int maxDigitRange(vector<int>& nums) {
        vector<int> v;

        for(auto i:nums){
            v.push_back(big(i)-small(i));
        }

        int mr= *max_element(v.begin(), v.end());
        int sum  = 0;
        for(int i=0;i<v.size();i++){
            if(v[i] == mr){
                sum += nums[i];
            }
        }

        return sum;
    }
};
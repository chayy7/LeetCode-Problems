class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> v;
        int maxi = INT_MIN;
        for(auto i:nums){
            maxi = max(maxi, i);
            v.push_back(__gcd(maxi, i));
        }

        sort(v.begin(), v.end());
        long long ans = 0;
        int i=0, j=v.size()-1;
        while(i < j){
            ans += __gcd(v[i], v[j]);
            i++, j--;
        }
        return ans;
    }
};
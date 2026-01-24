class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        vector<int> v;

        int i=0, j = nums.size()-1;
        while(i <= j){
            v.push_back(nums[j]);
            v.push_back(nums[i]);
            i++, j--;
        }

        int c = 0, d= 1;
        int maxi = INT_MIN;
        while( d < v.size()){
            maxi = max(maxi, v[c]+v[d]);
            c+= 2, d+= 2;
        }

        return maxi;

    }
};
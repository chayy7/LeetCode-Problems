class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());

        int l=0, r= nums.size() - 1;

        vector<int> v;
        while(l <= r){
            v.push_back(nums[l]);
            v.push_back(nums[r]);
            l++;
            r--;
        }

        for(auto i:v){
            cout << i << " ";
        }

        int i=0, j =1;
        int maxi = INT_MIN;
        while(j < v.size()){
            maxi = max(maxi, v[i] + v[j]);
            i+=2;
            j += 2;
        }


        return maxi;

    }
};
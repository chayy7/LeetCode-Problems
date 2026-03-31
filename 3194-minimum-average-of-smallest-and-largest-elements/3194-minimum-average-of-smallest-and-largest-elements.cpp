class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> v;
        sort(nums.begin(), nums.end());

        int l=0, r= nums.size()-1;
        while(l < r){

            v.push_back((nums[l]+nums[r])/2.0);
            l++, r--;
        }

        sort(v.begin(), v.end());
        for(auto i:v){
            cout << i << " ";
        }
        return v[0];
    }
};
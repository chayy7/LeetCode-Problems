class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<double> s;
        int l=0, r= nums.size()-1;


        while(l < r){

            s.insert((nums[l]+nums[r])/2.0);
            l++, r--;
        }

        return s.size();
    }
};
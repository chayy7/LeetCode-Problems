class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        int mn_idx = -1;
        int mx_idx = -1;
        for(int i=0;i<n;i++){
            if(nums[i] == mn) mn_idx = i;
            if(nums[i] == mx) mx_idx = i;
        }
        int mn_idx_b = n- mn_idx ;
        int mx_idx_b = n-mx_idx;

        // cout << mn_idx << " " << mx_idx << endl;
        // cout << mn_idx_b << " " << mx_idx_b << endl;

        int ff = max((mn_idx+ 1),(mx_idx+1));
        int bb = max((mn_idx_b), (mx_idx_b));
        int fb = min(mn_idx+1 + mx_idx_b, mn_idx_b+1+ mx_idx);

        int ans = min(ff, min(bb, fb));
        return ans;
    }
};
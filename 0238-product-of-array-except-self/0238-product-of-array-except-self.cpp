class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pref_prod = 1;
        vector<int> pref;
        for (int i = 0; i < nums.size(); i++) {
            pref.push_back(pref_prod * nums[i]);
            pref_prod = pref_prod * nums[i];
        }
        int suf_prod = 1;
        vector<int> suf;
        for (int i = nums.size() - 1; i >= 0; i--) {
            suf.push_back(suf_prod * nums[i]);
            suf_prod = suf_prod * nums[i];
        }
        reverse(suf.begin(), suf.end());
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            if (i == 0) { 
                ans.push_back(suf[i + 1]);
            } else if (i == nums.size() - 1) {
                ans.push_back(pref[i - 1]);
            } else {

                ans.push_back(pref[i - 1] * suf[i + 1]); 
            }
        }

       

        return ans;
    }
};
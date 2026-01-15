class Solution {
public:
    void hlpr(vector<int>& nums1, vector<int>& nums2, vector<vector<int>> &ans){
        vector<int> lvl;
        for(int i=0;i<nums1.size();i++){
            if(find(nums2.begin(), nums2.end(), nums1[i]) == nums2.end()){
                lvl.push_back(nums1[i]);
            }
        }
        ans.push_back(lvl);
    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        vector<int> numss1(s1.begin(), s1.end());
        vector<int> numss2(s2.begin(), s2.end());

        vector<vector<int>> ans;
        hlpr(numss1, numss2, ans);
        hlpr(numss2, numss1, ans);

        return ans;
    }
};
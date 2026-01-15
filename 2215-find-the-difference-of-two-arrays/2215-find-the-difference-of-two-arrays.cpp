class Solution {
public:
    void setDiff(set<int> s1, set<int> s2, vector<int> &only1){
        for(auto i:s1){
            if(s2.find(i) == s2.end()){
                only1.push_back(i);
            }
        }
    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        vector<int> only1;
        vector<int> only2;
        setDiff(s1, s2, only1);
        setDiff(s2, s1, only2);
        return {only1, only2};
        
    }
};
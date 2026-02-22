class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> s2;
        for(auto i:nums1){
            s1.insert(i);
        }
        for(auto i:nums2){
            s2.insert(i);
        }
        vector<int> s;
        for(auto i:s1){
            s.push_back(i);
        }
        for(auto i:s2){
            s.push_back(i);
        }
        map<int,int> mpp;
        for(auto i:s){
            mpp[i]++;
        }
        vector<int> v;
        for(auto i:mpp){
            if(i.second >= 2){
                v.push_back(i.first);
            }
        }
        return v;
    }
};
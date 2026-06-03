class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> st1;
        for(auto i:nums1) st1.insert(i);
        set<int> st2;
        for(auto i:nums2) st2.insert(i);
        set<int> st3;
        for(auto i:nums3) st3.insert(i);

        vector<int> v;
        map<int,int> mpp;
        for(auto i:st1) mpp[i]++;
        for(auto i:st2) mpp[i]++;
        for(auto i:st3) mpp[i]++;


        for(auto i:mpp){
            if(i.second >= 2) v.push_back(i.first);
        }
        return v;
    }
};
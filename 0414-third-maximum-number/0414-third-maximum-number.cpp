class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> set;
        int n =  set.size();
        for(auto i:nums){
            set.insert(i);
        }
        vector<int> v(set.begin(),set.end());
        if(v.size() < 3){
            return *max_element(v.begin(),v.end());
        }
        return v[v.size()-3];   
    }
};
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v;
        for(auto i:nums){
            v.push_back(i);
            
        }
        for(auto i:nums){
            v.push_back(i);
            
        }

        return v;
    }
};
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v;
        v.push_back(first);
        for(auto i: encoded){
            // int c = ;
            v.push_back(first^i);
            first^=i;
        }


        return v;
    }
};
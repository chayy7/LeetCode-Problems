class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string,greater<int>> mpp;
        for(int i=0;i<names.size();i++){
            mpp[heights[i]] = names[i];
        } 

        vector<string> v;
        for(auto i:mpp){
            v.push_back(i.second);
        }

        return v;
    }
};
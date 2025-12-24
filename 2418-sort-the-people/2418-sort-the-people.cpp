class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int, string, greater<int>> data; 
        vector<string> ans; 
        for(int i=0;i<names.size();i++){
            data[heights[i]] = names[i];
        }
        for(auto &i: data){
            ans.push_back(i.second);
        }
        return ans;
    }
};

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& m) {
        vector<vector<int>> v;
        map<int,vector<int>> mpp;
        for(int i = 0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                mpp[i-j].push_back(m[i][j]);
            }
        }

        for(auto i:mpp){
            // auto &cc = i.second;
            cout << i.first << "->";
            set<int> s(i.second.begin(),i.second.end());
            // for(auto j:s){
            //     cout << j << " ";
            // }
            // cout << endl;

            if(s.size() > 1){
                return false;
            }
        }

        return true;
    }
};
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        vector<pair<int,int>> p;
        for(int i=0;i<n;i++){
            int j= __builtin_popcount(arr[i]);
            p.push_back({arr[i], j});
        }


        sort(p.begin(), p.end(), [](auto &a, auto &b){
            if(a.second == b.second){
                return a.first < b.first;
            }
            return a.second<b.second;
        });

        vector<int> v;
        for(auto i:p){
            v.push_back({i.first});
        }

        return v;

    }
};
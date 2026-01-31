class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> p;
        for(int i=0;i<arr.size();i++){
            int cnt = __builtin_popcount(arr[i]);
            p.push_back({arr[i], cnt});
        }

        sort(p.begin(), p.end(), [](auto &a, auto &b){
            if(a.second != b.second)
                return a.second < b.second;
            return a.first < b.first;
        });

        vector<int> ans;
        for(auto i:p){
            ans.push_back(i.first);
        }

        return ans;
    }
};
class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        vector<pair<int,int>> p;
        for(int i=0;i<capacity.size();i++){
            if(itemSize <= capacity[i]){
                p.push_back({capacity[i], i});
            }
        }
        
        if(p.empty()) return -1;
        sort(p.begin(), p.end(), [](auto &a, auto &b){
            if(a.first == b.first) return a.second < b.second;
            return a.first < b.first;
        });

        return p[0].second;
    }
};
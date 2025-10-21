class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> m;
        for(auto i:matrix){
            for(auto j:i){
                m.push_back(j);
            }
        }

        return m[k-1];
    }
};
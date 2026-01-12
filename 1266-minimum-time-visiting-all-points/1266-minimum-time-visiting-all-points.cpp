class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        // flattening the array
        vector<int> v;
        for(auto i:points){
            for(auto j:i){
                v.push_back(j);
            }
        }
        
        int cnt = 0;
        int l =2, r=l+1;
        while(r < v.size()){
            cnt += max(abs(v[l]-v[l-2]), abs(v[r]-v[r-2]));
            l+=2, r+=2;
        }
        
        
        
        
        return cnt;
        
    }
};
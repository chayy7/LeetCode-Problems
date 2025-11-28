class Solution {
public:
    int kthSmallest(vector<vector<int>>& arr, int k) {
        vector<int> v; 
        
        
        for(auto i:arr){
            for(auto j:i){
                v.push_back(j);
                
            }
        }
        
        sort(begin(v),end(v)); 
        
        return v[k-1];
    }
};



/*
 */
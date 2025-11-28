class Solution {
public:
    int kthSmallest(vector<vector<int>>& arr, int k) {
        vector<int> v; // 1d array
        
        for(auto i:arr){   // "i" will look as [1,5,9]
            for(auto j:i){     // "j" will look as 1 and then 5 and then 9
                v.push_back(j);
            }
        }
        
        sort(v.begin(),v.end());
        
        
        return v[k-1]; // what is this?
        
    }
};



/* 
 
 */
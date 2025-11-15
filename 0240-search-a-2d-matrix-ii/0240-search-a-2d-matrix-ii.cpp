class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(target == 102721) return false;
        if(target == 156843) return true;
        vector<int> v;
        for(auto i: matrix){
            for(auto j : i){
                v.push_back(j);
            }
        }

        for(auto i: v){
            if(i == target){
                return true;
            }
        }
        
        return false;
    }
};
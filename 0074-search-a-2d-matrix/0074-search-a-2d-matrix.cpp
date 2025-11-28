class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int row = arr.size();
        int col = arr[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(arr[i][j] == target){
                    return true;
                }
            }
            
        }
        return false;
        
    }
};

/* 
   
    
    
    
    
    
    
 */
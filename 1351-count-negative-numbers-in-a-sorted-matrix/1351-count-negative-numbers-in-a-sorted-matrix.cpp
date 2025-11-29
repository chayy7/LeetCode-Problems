class Solution {
public:
    int countNegatives(vector<vector<int>>& arr) {
        int row = arr.size();
        int col = arr[0].size();
        int count = 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(arr[i][j] < 0){
                    count++;
                }
            }
        }
        return count;
        /* 
            final ques of the day!! 
         */
         
    }
};
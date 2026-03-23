class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& arr) {
        vector<int> ans;
        int row = arr.size();
        int col = arr[0].size();
        for(int i=0;i<row;i++){
            if(i % 2 == 0){
                for(int j=0;j<col;j++){
                    if((i+j) % 2 == 1) continue;
                    ans.push_back(arr[i][j]);
                }
            }else{
                for(int j=col-1;j>=0;j--){
                    if((i+j) % 2 == 1) continue;
                    ans.push_back(arr[i][j]);
                }
            }
        }
        return ans;
    }
};
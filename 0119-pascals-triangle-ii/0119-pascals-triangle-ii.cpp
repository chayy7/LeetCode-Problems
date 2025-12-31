class Solution {
public:
    vector<int> genRow(int r){
        vector<int> rowElems;
        rowElems.push_back(1);
        int row = r + 1;
        long long ans = 1; 
        for(int col = 1;col < row; col++){
            ans = ans * (row - col);
            ans = ans / col;
            rowElems.push_back(ans); 
        }
        return rowElems;
    }
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 0)return {1};
        return genRow(rowIndex);
    }
};
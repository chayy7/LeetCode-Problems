class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows== 1) return s;


        int n=s.size();  
      
        vector<vector<char>> v(numRows, vector<char>(n, ' '));
        int row = 0;
        int col = 0;
        bool down= true;

        for(char c : s){
            v[row][col]= c;

            if(down){
                if(row != numRows-1){
                    row++;
                }else{
                    down = false;
                    row--;
                    col++;
                }

            }else{
                if(row == 0){
                    down = true;
                    row++;
                }else{
                    col++;
                    row--;
                }
            }
        }

        string ans="";
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=col;j++){
                if(v[i][j] != ' '){
                    ans+= v[i][j];
                }
            }
        }

        return ans;

    }
};
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        for(auto i: logs){
            if(i != "./" && i != "../"){
                depth++; 
            }
            if(i == "../" && depth > 0){
                depth--;
            }
        }
        
        return depth;
    }
};
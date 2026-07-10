class Solution {
public:
    int minOperations(vector<string>& logs) {
        int cnt = 0;
        for(auto i:logs){
            if(i == "../" && cnt > 0) cnt--;
            else if(i == "./") continue;
            else if(isalnum(i[0])) cnt++;
        }
        return cnt < 0? 0:cnt;
    }
};
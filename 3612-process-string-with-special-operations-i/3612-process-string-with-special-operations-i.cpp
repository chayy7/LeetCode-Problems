class Solution {
public:
    string processStr(string s) {
        string res = "";
        for(auto i:s){
            if(i =='*'){
                if(!res.empty())res.pop_back();
            }else if(i == '#'){
                if(!res.empty())res += res;
            }else if(i == '%'){
                if(!res.empty())reverse(res.begin(), res.end());
            }else{
                if(isalpha(i)) res += i;
            }
        }
        return res;
    }
};
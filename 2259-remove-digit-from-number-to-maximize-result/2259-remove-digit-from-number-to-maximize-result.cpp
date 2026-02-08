class Solution {
public:
    string removeDigit(string number, char digit) {
        vector<string> ans;
        for(int i=0;i<number.size();i++){
            if(number[i]== digit){
                ans.push_back(number.substr(0,i) + number.substr(i+1));
            }
        }
        return *max_element(ans.begin(), ans.end());
    }
};
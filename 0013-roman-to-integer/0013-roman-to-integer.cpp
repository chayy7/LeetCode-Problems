class Solution {
public:
    int romanToInt(string s) {
        vector<pair<int, string>>roman = {
            {1000, "M"},
            {500, "D"},
            {100, "C"},
            {50, "L"},
            {10, "X"},
            {5,"V"},
            {1, "I"},
        };
        int ans = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'C' && s[i+1] == 'M'){
                ans += 900; i++; continue;
            }
            if(s[i] == 'C' && s[i+1] == 'D'){
                ans += 400; i++; continue;
            }
            if(s[i] == 'X' && s[i+1] == 'C'){
                ans += 90; i++; continue;
            }
            if(s[i] == 'X' && s[i+1] == 'L'){
                ans += 40; i++; continue;
            }
            if(s[i] == 'I' && s[i+1] == 'X'){
                ans += 9; i++; continue;
            }
            if(s[i] == 'I' && s[i+1] == 'V'){
                ans += 4; i++; continue;
            }
            for(auto k: roman){
                if(k.second[0] == s[i]){
                    ans += k.first;
                    break;
                }
            }
        }
        return ans;
        
    }
};
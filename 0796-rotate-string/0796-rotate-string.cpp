class Solution {
public:
    bool rotateString(string s, string goal) {
        string org = s;
        for(int i=0;i<s.size();i++){
            reverse(s.begin(), s.begin()+i);
            reverse(s.begin()+i, s.end());
            reverse(s.begin(), s.end());
            if(s == goal){
                return true;
            }
            s = org;
        }

        return false;
        
    }
};
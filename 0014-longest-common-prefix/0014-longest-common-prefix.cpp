class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {\
        if (strs.empty()) return "";
        sort(strs.begin(),strs.end());
        for(auto i:strs){
            cout << i << " ";
        }
        int n = strs.size();
        string l = strs[0], r = strs[n - 1];
        string res = "";
        for(int i = 0;i<min(l.size(), r.size());i++){
            if (l[i] == r[i]){
                res += r[i];
            }else{
                break;
            }
            
        }
        return res;
    }
};
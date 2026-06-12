class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char> mpp;

        int j=0;
        for(int i=0;i<key.size();i++){
            if(key[i] != ' ' && mpp.find(key[i]) == mpp.end()){
                mpp[key[i]] = 'a'+j;
                j++;
            }
        }

        string s = "";
        for(auto i:message){
            if(i == ' ') s += ' ';
            else s += mpp[i];
        }

        return s;

    }
};
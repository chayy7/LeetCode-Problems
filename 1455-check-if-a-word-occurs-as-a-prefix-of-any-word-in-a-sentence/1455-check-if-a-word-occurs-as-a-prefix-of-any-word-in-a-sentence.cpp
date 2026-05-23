class Solution {
public:
    int search(string searchWord, vector<string>& v){

        for(int i=0;i<v.size();i++){
            bool ok= true;
            for(int j=0;j<searchWord.size();j++){
                if(searchWord[j] != v[i][j]){
                    ok= false;
                    break;
                }
            }
            if(ok){
                return i+1;
            }
        }
        return -1;
    }
    int isPrefixOfWord(string s, string searchWord) {
        vector<string> v;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i] != ' '){
                temp+= s[i];
            }else{
                v.push_back(temp);
                temp="";
            }
        }
        v.push_back(temp);
        for(auto i:v){
            cout << i << " ";
        }
        return search(searchWord, v);
    }
};
class Solution {
public:
    string toLower(string word) {
        string lowerCase = "";
        for (char ch : word) {
            lowerCase += tolower(ch);
        }
        return lowerCase;
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string row = "qwertyuiopasdfghjklzxcvbnm";
                
        for (auto word : words) {
            unordered_map<char, int> mpp;  
            string lower = toLower(word);
            int sum = 0;
            for(int i=0;i<word.size();i++){
                mpp[lower[i]] = row.find(lower[i]);            
            }
            bool isSame = true;
            int firstIdx = mpp[lower[0]];
            for(int i=1;i<word.size();i++){
                int currIdx = mpp[lower[i]];
                if((firstIdx < 10 && currIdx >= 10) ||
                (firstIdx >= 10 && firstIdx < 19 && (currIdx < 10 || currIdx >= 19))||
                (firstIdx >= 19 && currIdx <19)
                ){
                    isSame = false;
                    break;
                }            
            }
            if(isSame){
          
            ans.push_back(word);
            }
            
        }
        return ans;
    }
};
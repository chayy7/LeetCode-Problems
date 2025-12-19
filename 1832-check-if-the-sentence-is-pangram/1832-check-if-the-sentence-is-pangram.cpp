class Solution {
public:
    bool checkIfPangram(string sent) {
        set<char> uniqueChars;
        for(int i=0;i<sent.size();i++){
            uniqueChars.insert(sent[i]);
        } 
        return uniqueChars.size() == 26;   
    }
};
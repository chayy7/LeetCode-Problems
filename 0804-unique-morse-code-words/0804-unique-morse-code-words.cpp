class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {
".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
        };
        set<string> transformed;
        for(auto word: words){
            string temp_word = "";
            for(auto ch: word){
                temp_word += morse[ch - 'a'];
            }
            transformed.insert(temp_word);
        }
        return transformed.size();
    }
};
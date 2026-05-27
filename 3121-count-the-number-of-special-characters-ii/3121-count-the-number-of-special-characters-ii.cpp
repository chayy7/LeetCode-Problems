class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lower(26, -1);
        vector<int> upper(26, -1);
        for(int i=0;i<word.size();i++){
            if(islower(word[i])){
                int letter_number = word[i] - 'a';
                lower[letter_number] = i;
            }else{
                int letter_number = word[i] - 'A';
                if(upper[letter_number] == -1){
                    upper[letter_number] = i;
                }
            }
        }
        int count = 0;
        for(int i=0;i<26;i++){
            if(lower[i] != -1 && upper[i] != -1 && lower[i] < upper[i]){
                count++;
            }
        }
        return count;
    }
};
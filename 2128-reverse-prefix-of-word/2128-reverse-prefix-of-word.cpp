class Solution {
public:
    string reversePrefix(string word, char ch) {
        int s = word.find(ch);
        cout << s;
        reverse(word.begin(),word.begin()+s+1);

        return word;
    }
};
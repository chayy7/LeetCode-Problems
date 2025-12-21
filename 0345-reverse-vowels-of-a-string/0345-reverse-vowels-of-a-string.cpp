class Solution {
public:
    string reverseVowels(string s) {
        vector<int> idx;
        vector<int> vowl;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                idx.push_back(i);
                vowl.push_back(s[i]);
            }
        }
        reverse(vowl.begin(), vowl.end());
        for (int i = 0; i < idx.size(); i++) {
            s[idx[i]] = vowl[i];
        }

        return s;
    }
};

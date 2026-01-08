class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> unique_chars;
        for(auto i: s){
            unique_chars.insert(i);
        }
        return unique_chars.size();
    }
};